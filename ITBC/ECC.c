

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Information about the curve and finite field

int a = 4;  // coefficient for elliptic curve
int b = 20; // coefficient for elliptic curve
int p = 29; // prime number to provide finite field

int points[1000][2]; // to store a set of points satisfying the curve

// Information required for Encryption and Decryption

// Private Information
int PrivKey = 11; // Private Key of Receiver

// Public Information
int PubKey[2] = {0, 0};
int randoms = 11;
int Pbase[2] = {0, 0}; // Base point for all operations
int Enc[4] = {0, 0, 0, 0};

// Functions Used
int *sclr_mult(int k, int point[2]);
int *add(int A[2], int B[2]);
int inverse(int num);
int *encode(int m, int Pb[2], int random, int Pbase[2]); //(Message,Public Key)
int *genKey(int X, int P[2]);                            //(Private Key,Base Point)
int decode(int Enc[4], int PrivKey);                     //(Encrypted Message, Private key of the Receiver) Outputs Message
void generate();

int main()
{
    int *temp;

    generate();
    Pbase[0] = points[5][0]; // Deciding the base point here
    Pbase[1] = points[5][1];

    temp = genKey(PrivKey, Pbase);
    PubKey[0] = *temp;
    PubKey[1] = *(temp + 1);
    printf("\nThe Public Key is (%d,%d)\n", PubKey[0], PubKey[1]);

    int message[2];
    message[0] = points[5][0];
    message[1] = points[5][1];
    printf("The message point is (%d,%d)\n", message[0], message[1]);

    int P[2];
    temp = sclr_mult(random, Pbase);
    P[0] = *temp;
    P[1] = *(temp + 1);

    int Q[2];
    temp = sclr_mult(random, PubKey);
    Q[0] = *temp;
    Q[1] = *(temp + 1);

    int R[2];
    temp = add(message, Q);
    R[0] = *temp;
    R[1] = *(temp + 1);

    printf("The encrypted point is [(%d,%d),(%d,%d)]\n", P[0], P[1], R[0], R[1]);

    temp = sclr_mult(PrivKey, P);
    int O[2];
    O[0] = *temp;
    O[1] = p - *(temp + 1);

    temp = add(R, O);
    O[0] = *temp;
    O[1] = *(temp + 1);
    printf("The message point is (%d,%d)\n", O[0], O[1]);
    return 0;
}

int *sclr_mult(int k, int P[2]) // using LSB first algorithm
{
    int *temp, i;
    int *Q = calloc(2, sizeof(int));
    Q[0] = 0;
    Q[1] = 0;
    for (i = 31; i >= 0; i--)
    {
        if ((k >> i) & 1)
            break;
    }
    for (int j = 0; j <= i; j++)
    {
        if ((k >> j) & 1)
        {
            temp = add(Q, P);
            Q[0] = *temp;
            Q[1] = *(temp + 1);
        }
        temp = add(P, P);
        P[0] = *temp;
        P[1] = *(temp + 1);
    }
    return Q;
}

int *add(int A[2], int B[2])
{
    int *C = calloc(2, sizeof(int));
    int x = 0;
    if (A[0] == 0 || A[1] == 0)
    {
        return B;
    }
    if (B[0] == 0 || B[1] == 0)
    {
        return A;
    }
    if (A[1] == (p - B[1]))
    {
        return C;
    }
    if ((A[0] == B[0]) && (A[1] == B[1]))
    {
        x = ((3 * (A[0] * A[0])) + a) * inverse(2 * A[1]);
        C[0] = ((x * x) - (2 * A[0])) % p;
        C[1] = ((x * (A[0] - C[0])) - A[1]) % p;
        // C[0]=((A[0]*A[0])%p+(b*inverse(A[0]*A[0]))%p)%p;//For Binary Curves
        // C[1]=((A[0]*A[0])%p+((A[0]+(A[1]*inverse(A[0]))*C[0]))%p+(C[0])%p)%p;//For Binary Curves
    }
    else
    {
        x = (B[1] - A[1]) * inverse(B[0] - A[0]);
        C[0] = ((x * x) - (A[0] + B[0])) % p;
        C[1] = ((x * (A[0] - C[0])) - A[1]) % p;
        // C[0]=((((A[1]+B[1])*inverse(A[0]+B[0]))*((A[1]+B[1])*inverse(A[0]+B[0])))%p + ((A[1]+B[1])*inverse(A[0]+B[0]))%p + A[0]%p + B[0]%p + a%p)%p;//For Binary Curves
        // C[1]=((((A[1]+B[1])*inverse(A[0]+B[0]))*(A[0]+C[0]))+C[0]+A[1])%p;//For Binary Curves
    }
    if (C[0] < 0)
        C[0] = p + C[0];
    if (C[1] < 0)
        C[1] = p + C[1];
    return C;
}
int inverse(int num)
{
    int i = 1;
    if (num < 0)
        num = p + num;
    for (i = 1; i < p; i++)
    {
        if (((num * i) % p) == 1)
            break;
    }
    // printf("inverse=%d,%d",i,num);
    return i;
}

void generate()
{
    int rhs, lhs, i = 0; // to find set of points that satisfy the elliptic curve
    for (int x = 0; x < p; x++)
    {
        rhs = ((x * x * x) + (a * x) + b) % p;
        for (int y = 0; y < p; y++)
        {
            lhs = (y * y) % p;
            if (lhs == rhs)
            {
                points[i][0] = x;
                points[i][1] = y;
                i += 1;
            }
        }
    }
    printf("\nNumber of points found on the curve is %d \n", i);
    for (int k = 0; k < i; k++)
    {
        printf("%d(%d,%d)\n", (k), points[k][0], points[k][1]);
    }
}

int *genKey(int X, int P[2])
{
    int *temp;
    int *Q = calloc(2, sizeof(int));
    temp = sclr_mult(X, P);
    Q[0] = *temp;
    Q[1] = *(temp + 1);
    return Q;
}

// Output:
// /tmp/5PhpA4skEe.o
// Number of points found on the curve is 36
// 0(0,7)
// 1(0,22)
// 2(1,5)
// 3(1,24)
// 4(2,6)
// 5(2,23)
// 6(3,1)
// 7(3,28)
// 8(4,10)
// 9(4,19)
// 10(5,7)
// 11(5,22)
// 12(6,12)
// 13(6,17)
// 14(8,10)
// 15(8,19)
// 16(10,4)
// 17(10,25)
// 18(13,6)
// 19(13,23)
// 20(14,6)
// 21(14,23)
// 22(15,2)
// 23(15,27)
// 24(16,2)
// 25(16,27)
// 26(17,10)
// 27(17,19)
// 28(19,13)
// 29(19,16)
// 30(20,3)
// 31(20,26)
// 32(24,7)
// 33(24,22)
// 34(27,2)
// 35(27,27)

// The Public Key is (16,27)
// The message point is (2,23)
// The encrypted point is [(0,7),(4,1)]
// The message point is (4,1)

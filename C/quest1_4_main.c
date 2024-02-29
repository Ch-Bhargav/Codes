// # Quest 04: Polynectar!

// In this quest, you will have to perform Professor Snape's validation spells to validate the quantities of ingredients for students.

// To achieve this, you will create a function `polynectar_abs` that takes an integer named `quantity` as a parameter. This function will return the absolute value of the given quantity.

// ```c
// int polynectar_abs(int quantity);
// ```

// Here is a test main:

// ```c
// int main()
// {
//   printf("4 == %d\n", polynectar_abs(4));
//   printf("0 == %d\n", polynectar_abs(0));
//   printf("17 == %d\n", polynectar_abs(17));
//   printf("42 == %d\n", polynectar_abs(-42));
//   printf("1 == %d\n", polynectar_abs(-1));
//   return (0);
// }
// ```

#include <stdio.h>
#include <math.h>

int polynectar_abs(int q)
{
    if (q < 0)
        return q * -1;
}
int main()
{
    int q;
    scanf("%d", &q);

    printf("%d", polynectar_abs(q));
    return 0;
}
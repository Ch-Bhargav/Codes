#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int A[N], B[N], C[N], D[N];

    for (int i = 0; i < N; i++)
        cin >> A[i] >> B[i] >> C[i] >> D[i];

    int covered[101][101] = {0};

    for (int i = 0; i < N; i++)
    {
        for (int x = A[i]; x < B[i]; x++)
        {
            for (int y = C[i]; y < D[i]; y++)
                covered[x][y] = 1;
        }
    }

    int S = 0;

    for (int x = 0; x <= 100; x++)
    {
        for (int y = 0; y <= 100; y++)
            S += covered[x][y];
    }

    cout << S << endl;

    return 0;
}

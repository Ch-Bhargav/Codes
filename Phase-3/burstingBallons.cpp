#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int getMax(int A[], int N)
{
    int B[N + 2];

    B[0] = 1;
    B[N + 1] = 1;

    for (int i = 1; i <= N; i++)
        B[i] = A[i - 1];

    vector<vector<int>> dp(N + 2, vector<int>(N + 2, 0));

    for (int i = 1; i < N + 1; i++)
    {
        for (int j = 1; j < N - i + 2; j++)
        {
            int k = j + i - 1;
            for (int l = j; l < k + 1; l++)
            {
                dp[j][k] = max(dp[j][k], dp[j][l - 1] + B[j - 1] * B[l] * B[k + 1] + dp[l + 1][k]);
            }
        }
    }

    // for (auto rows : dp)
    // {
    //     for (auto val : rows)
    //     {
    //         cout << val << "\t";
    //     }
    //     cout << endl;
    // }

    return dp[1][N];
}

// Driver code
int main()
{
    int A[] = {3, 1, 5, 8};

    int N = sizeof(A) / sizeof(A[0]);

    cout << getMax(A, N) << endl;
}

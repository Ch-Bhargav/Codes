#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int a[n / 2 + 1], b[n / 2 + 1];
        for (int i = 0; i < n / 2 + 1; i++)
        {
            a[i] = 0;
            b[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                a[i / 2] = s[i] - '0';
            }
            else
            {
                b[i / 2] = s[i];
            }
        }
        int dp[n / 2 + 1][n / 2 + 1];
        for (int i = 0; i <= n / 2; i++)
        {
            for (int j = 0; j <= n / 2; j++)
            {
                dp[i][j] = 0;
            }
        }
        for (int i = 0; i <= n / 2; i++)
        {
            dp[i][i] = a[i];
        }
        for (int i = 0; i < n / 2; i++)
        {
            dp[i][i + 1] = a[i] * a[i + 1];
        }
        for (int i = 2; i <= n / 2; i++)
        {
            for (int j = 0; j + i <= n / 2; j++)
            {
                int k = j + i;
                dp[j][k] = 0;
                for (int l = j; l < k; l++)
                {
                    if (b[l] == '+')
                    {
                        dp[j][k] = max(dp[j][k], dp[j][l] + dp[l + 1][k]);
                    }
                    else
                    {
                        dp[j][k] = max(dp[j][k], dp[j][l] * dp[l + 1][k]);
                    }
                }
            }
        }
        cout << dp[0][n / 2] << endl;
    }
    return 0;
}
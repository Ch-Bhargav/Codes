#include <bits/stdc++.h>

using namespace std;
int countSubstrings(string s)
{
    int n = s.length();
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int cnt = 0;
    for (int g = 0; g < n; g++)
    {
        for (int i = 0, j = g; j < n; i++, j++)
        {
            if (g == 0)
                dp[i][j] = true;
            else if (g == 1)
                dp[i][j] = (s[i] == s[j]);
            else
            {
                if (s[i] == s[j] && dp[i + 1][j - 1] == true)
                    dp[i][j] = true;
            }
            if (dp[i][j] == true)
                cnt++;
        }
    }
    return cnt;
}
int main()
{
    string s = "appleap";
    cout << countSubstrings(s);
    return 0;
}
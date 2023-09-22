
#include <bits/stdc++.h>

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % n != 0)
        {
            cout << -1 << endl;
            continue;
        }
        int ans = 0;
        int avg = sum / n;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > avg)
                ans++;
        }
        cout << ans << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        int mx = 0, sum = 0;
        map<int, int> mp;
        mp[0] = -1;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (mp.find(sum) != mp.end())
            {
                mx = max(mx, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
        cout << mx << endl;
    }
}
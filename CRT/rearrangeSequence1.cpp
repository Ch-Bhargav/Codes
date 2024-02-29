#include <bits/stdc++.h>
using namespace std;

int findLength(int arr[], int n)
{
    int max_len = 1;

    for (int i = 0; i < n - 1; i++)
    {

        set<int> myset;
        myset.insert(arr[i]);

        int mn = arr[i], mx = arr[i];

        for (int j = i + 1; j < n; j++)
        {

            if (myset.find(arr[j]) != myset.end())
                break;

            myset.insert(arr[j]);
            mn = min(mn, arr[j]);
            mx = max(mx, arr[j]);

            if (mx - mn == j - i)
                max_len = max(max_len, mx - mn + 1);
        }
    }
    return max_len;
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        cout << findLength(arr, n) << endl;
    }
}

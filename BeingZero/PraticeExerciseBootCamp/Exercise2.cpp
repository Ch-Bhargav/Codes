
// https://ideone.com/b2sgYp

#include <bits/stdc++.h>
using namespace std;

#define loop(a, n) for (int i = a; i < n; i++)

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adjList(n + 1);

        loop(0, n - 1)
        {
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        int mx = 0, ans;
        loop(1, n + 1)
        {
            if (mx < adjList[i].size())
            {
                mx = adjList[i].size();
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
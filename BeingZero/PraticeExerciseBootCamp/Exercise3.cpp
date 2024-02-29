#include <bits/stdc++.h>
using namespace std;

#define loop(s, n) for (int i = s; i < n; i++)

void dfs(vector<vector<int>> &adjlsit, int node, int pare)
{
    cout << node << " ";
    for (auto it : adjlsit[node])
    {
        if (it != pare)
        {
            dfs(adjlsit, it, node);
        }
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adjlist(n + 1);
        loop(0, n - 1)
        {
            int a, b;
            cin >> a >> b;
            adjlist[a].push_back(b);
            adjlist[b].push_back(a);
        }

        dfs(adjlist, 1, 0);
        cout << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

#define loop(a, n) for (int i = a; i < n; i++)

void depthFirstSearch(vector<vector<int>> &adjlist, int node, int a)
{
    cout << node << " ";
    for (auto it : adjlist[node])
    {
        if (it != a)
        {
            depthFirstSearch(adjlist, it, node);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adjlist(n + 1);
        adjlist[0].push_back(1);

        for (int i = 2; i <= n; i++)
        {
            int a;
            cin >> a;
            adjlist[a].push_back(i);
            adjlist[i].push_back(a);
        }

        cout << "adjlist:" << endl;
        loop(1, n + 1)
        {
            cout << i << ":";
            for (int j = 0; j < adjlist[i].size(); j++)
            {
                cout << adjlist[i][j] << " ";
            }
            cout << endl;
        }

        cout << "dfs:" << endl;
        depthFirstSearch(adjlist, 1, 0);
        cout << endl;
    }
}

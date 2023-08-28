#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> adj;

void addEdge(vector<vector<int>> &adj, int u, int v)
{
    adj[u].push_back(v);
}

void DFS(int curr, int par, vector<int> &dp)
{
    int leafNode = 0;
    if (adj[curr].size() > 0)
    {
        for (int child : adj[curr])
        {
            if (adj[child].size() == 0)
            {
                leafNode++;
            }
            else
            {
                DFS(child, curr, dp);
            }
        }
        if (leafNode < 3)
        {
            dp[curr] = 1;
        }
    }
}

int main()
{
    int test;
    {
        int n;
        cin >> n;

        vector<int> dp(n, 0);
        adj.resize(n);

        for (int j = 0; j < n; ++j)
        {
            adj[j] = vector<int>();
        }

        for (int i = 1; i < n; ++i)
        {
            int node;
            cin >> node;
            addEdge(adj, node - 1, i);
        }

        DFS(0, 0, dp);

        bool spruce = true;
        for (int z : dp)
        {
            if (z == 1)
            {
                spruce = false;
            }
        }

        if (spruce)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}

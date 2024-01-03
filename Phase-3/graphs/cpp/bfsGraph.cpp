#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

void bfs(unordered_map<int, vector<int>> g, int start)
{
    queue<int> q;
    q.push(start);
    set<int> visited;
    visited.insert(start);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cout << u << " ";
        for (int v : g[u])
        {
            if (visited.find(v) == visited.end())
            {
                q.push(v);
                visited.insert(v);
            }
        }
    }
}
int main()
{
    int nv, ne;
    cin >> nv >> ne;

    unordered_map<int, vector<int>> g;
    for (int u = 0; u < nv; u++)
    {
        g[u] = vector<int>();
    }
    for (int i = 0; i < ne; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
    }

    int startNode;
    cin >> startNode;

    bfs(g, startNode);

    return 0;
}
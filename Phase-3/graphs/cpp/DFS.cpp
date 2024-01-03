#include <iostream>
#include <vector>
#include <unordered_map>
#include <set>
#include <stack>
using namespace std;

void dfs(unordered_map<int, vector<int>> g, int u, set<int> visited, stack<int> stk)
{
    visited.insert(u);
    for (int v : g[u])
    {
        if (visited.find(v) == visited.end())
        {
            dfs(g, v, visited, stk);
        }
    }
    stk.push(u);
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

    stack<int> revTopoSort;
    set<int> visited;

    for (int u = 0; u < nv; u++)
    {
        if (visited.find(u) == visited.end())
        {
            dfs(g, u, visited, revTopoSort);
        }
    }

    while (!revTopoSort.empty())
    {
        cout << revTopoSort.top() << " ";
        revTopoSort.pop();
    }
    return 0;
}

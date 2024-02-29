#include <iostream>
#include <set>
#include <unordered_map>
#include <vector>
using namespace std;
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
        g[v].push_back(u);
    }
    // printing adj list
    for (int u = 0; u < nv; u++)
    {
        cout << u << " -> ";
        for (int v : g[u])
        {
            cout << v << " ";
        }
        cout << endl;
    }
    return 0;
}
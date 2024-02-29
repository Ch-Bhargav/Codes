#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 2 * 105;

vector<int> graph[MAXN];
int assistants_count[MAXN];

void dfs(int node)
{
    assistants_count[node] = 0;
    for (int child : graph[node])
    {
        dfs(child);
        assistants_count[node] += (1 + assistants_count[child]);
    }
}

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; ++i)
        {
            graph[i].clear();
        }

        for (int i = 2; i <= n; ++i)
        {
            int boss;
            cin >> boss;
            graph[boss].push_back(i);
        }

        dfs(1);

        for (int i = 1; i <= n; ++i)
        {
            cout << assistants_count[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

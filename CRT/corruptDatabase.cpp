#include <iostream>
#include <unordered_map>
#include <unordered_set>

using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int j = 1; j <= t; j++)
    {
        int n, m;
        cin >> n >> m;

        unordered_map<int, unordered_set<int>> mp;
        bool ans = false;

        for (int i = 0; i < m; i++)
        {
            int id, code;
            cin >> id >> code;

            if (mp.find(id) == mp.end())
            {
                mp[id] = unordered_set<int>();
            }

            unordered_set<int> &st = mp[id];

            if (st.find(code) != st.end())
            {
                ans = true;
            }
            else
            {
                st.insert(code);
            }
        }

        if (ans)
        {
            cout << "Scenario #" << j << ": impossible" << endl;
        }
        else
        {
            cout << "Scenario #" << j << ": possible" << endl;
        }
    }

    return 0;
}

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int T;
    cin >> T;

    for (int t = 0; t < T; t++)
    {
        int n;
        cin >> n;

        unordered_set<int> set1;
        unordered_set<int> set2;

        for (int i = 0; i < n; i++)
        {
            int id, m;
            cin >> id >> m;

            for (int j = 0; j < m; j++)
            {
                int fid;
                cin >> fid;
                set1.insert(id);
                set2.insert(fid);
            }
        }

        for (int id : set1)
        {
            set2.erase(id);
        }

        cout << set2.size() << endl;
    }

    return 0;
}

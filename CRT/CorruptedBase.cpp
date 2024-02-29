#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = true;
    int test;
    cin >> test;
    while (test--)
    {
        set<pair<int, int>> database;
        int n;
        cin >> n;
        int q;
        cin >> q;
        while (q--)
        {
            int a;
            cin >> a;
            int b;
            cin >> b;

            if (database.find({a, b}) == database.end())
                database.insert({a, b});

            else
                flag = false;
        }

        if (flag)
            cout << "possible" << endl;
        else
            cout << "Impossible" << endl;
    }
}
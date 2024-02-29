#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    map<int, int> mp;
    while (test--)
    {
        int n;
        cin >> n;
        while (n--)
        {
            int opt;
            cin >> opt;
            // adding <key,value>
            if (opt == 0)
            {
                int key;
                cin >> key;
                int value;
                cin >> value;
                mp[key] = value;
            }
            // check key existence
            else if (opt == 1)
            {
                int key;
                cin >> key;
                if (mp.find(key) != mp.end())
                    cout << "true" << endl;
                else
                    cout << "false" << endl;
            }
            // print value for key
            else if (opt == 2)
            {
                int key;
                cin >> key;
                cout << "value:" << mp[key] << endl;
            }
            // count keys
            else if (opt == 3)
            {
                cout << "size:" << mp.size() << endl;
            }
            // remove key
            else if (opt == 4)
            {
                int key;
                cin >> key;
                mp.erase(key);
            }
        }
        cout << endl;
    }
    return 0;
}
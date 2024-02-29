#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        set<int> st;
        while (n--)
        {
            int ch, val;
            cin >> ch >> val;
            if (ch == 0)
                st.insert(val);
            else if (ch == 1)
            {
                cout << val << endl;
                auto pos = st.find(val);

                if (pos != st.end())
                    cout << "true " << endl;
                else
                    cout << "false " << endl;
            }
            else
                st.erase(val);
        }
        cout << endl;
    }
}

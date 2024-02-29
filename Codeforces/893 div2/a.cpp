
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    while (test--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b)
            cout << "first" << endl;
        else if (a < b)
            cout << "second" << endl;
        else if (a == b)
        {
            if (c % 2 == 0)
                cout << "second" << endl;
            else
                cout << "first" << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int test;
    cin >> test;

    while (test--)
    {
        string str;
        cin >> str;

        if (str[0] == 'a' || str[1] == 'b' || str[2] == 'c')
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
    long long int test;
    cin >> test;
    ilong long nt n;
    cin >> n;
    test--;
    while (test--)
    {
        long long int p;
        cin >> p;
        if (n != p)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
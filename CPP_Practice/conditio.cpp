#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    if (n == 3)
    {
        cout << "BUZZ" << endl;
    }
    else if (n == 5)
    {
        cout << "FIZZ" << endl;
    }
    else
    {
        cout << n << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    bool flag = false;

    if (b - a <= 2 && a < b)
        flag = true;
    else if (a - b <= 3 && a > b)
        flag = true;
    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, ans = "";
    cin >> str;
    for (auto ch : str)
    {
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            ans += ch;
    }
    cout << ans << endl;
}
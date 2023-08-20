#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define str string

bool isValid(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            if (st.empty())
                return false;
            else if (s[i] == ')' && st.top() != '(')
                return false;
            else
                st.pop();
        }
    }
    return st.empty() ? 1 : 0;
}

void solve()
{

    str s;
    cin >> s;
    int n = s.size();

    string b = "";

    for (int i = 0; i < n; i++)
        b += "()";

    bool flag = isValid(s);
    if (flag)
        cout << "NO" << endl;

    else
    {
        string a = string(n, '(') + string(n, ')');
        string b = "";

        for (int i = 0; i < n; i++)
            b += "()";
        cout << "YES" << endl;
        if (a.find(s) == string::npos)
        {
            cout << a << endl;
        }
        else
        {
            cout << b << endl;
        }
    }
}

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
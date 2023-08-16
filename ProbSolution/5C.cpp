#include <bits/stdc++.h>
using namespace std;
stack<char> stk;

bool isOpenBrace(char ch)
{
    return (ch == '(');
}
bool isMatch(char op, char cp)
{
    return (cp == ')' && op == '(');
}

bool brackets(string str)
{
    for (auto ch : str)
    {
        if (isOpenBrace(ch))
            stk.push(ch);
        else
        {
            if (stk.empty())
                return false;
            char tch = stk.top();
            stk.pop();
            if (!isMatch(tch, ch))
                return false;
        }
    }
    return stk.empty();
}

int main()
{
    string str;
    cin >> str;
    if (brackets(str))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
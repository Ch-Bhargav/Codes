#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::string str, ans = "";

    std::cin >> str;
    for (auto ch : str)
    {
        if (ch == 'h' && ans == "")
            ans += ch;
        else if (ch == 'e' && ans[ans.length() - 1] == 'h')
            ans += ch;
        else if (ch == 'l' && ans[ans.length() - 1] == 'e')
        {
            ans += ch;
        }
        else if (ch == 'l' && ans[ans.length() - 2] == 'e' && ans[ans.length() - 1] == 'l')
        {
            ans += ch;
        }
        else if (ch == 'o' && ans[ans.length() - 1] == 'l' && ans[ans.length() - 2] == 'l' && ans[ans.length() - 3] == 'e')
        {
            ans += ch;
        }
    }
    ans == "hello" ? cout << "YES" << endl : cout << "NO" << endl;
}
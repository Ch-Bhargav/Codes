#include <bits/stdc++.h>
using namespace std;

// Varibles declared outside the functions are global.
/*
Global variables.
int var
*/

bool normalPalindrome(string &str) // arguments are only for this local function only.
{
    int s = 0, e = str.size() - 1;
    while (s < e)
    {
        if (str[s] != str[e])
            return false;
        s++, e--;
    }
    return true;
}

/*  ->     <-
    s       e
    0 1 2 3 4
    m a d a m
*/

int main()
{
    string str;
    cin >> str;
    string str1;
    for (auto ele : str)
    {
        if (ele != ' ')
        {
            cout << ele << " ";
            str1 += tolower(ele);
        }
    }
    normalPalindrome(str1) ? cout << "Yes" << endl : cout << "No" << endl;
}
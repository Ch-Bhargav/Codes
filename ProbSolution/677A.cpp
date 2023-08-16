#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int width = 0;
    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        if (m > h)
            width += 2;
        else
            width++;
    }
    cout << width;
}
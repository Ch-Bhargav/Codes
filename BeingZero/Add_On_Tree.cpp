#include <iostream>
#include <bits/stdc++.h>
int main()
{
    int test;
    std::cin >> test;
    while (test--)
    {
        int n;
        std::cin >> n;

        std::vector<int> deg(n + 1, 0);
        for (int p = 1; p < n; ++p)
        {
            int x, y;
            std::cin >> x >> y;
            ++deg[x];
            ++deg[y];
        }

        bool possible = true;
        for (int p = 1; p <= n; ++p)
        {
            if (deg[p] == 2)
            {
                possible = false;
                break;
            }
        }

        std::cout << (possible ? "YES" : "NO") << std::endl;
    }
    return 0;
}
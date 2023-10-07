#include <iostream>
#include <string>

int main()
{
    std::string ds;
    std::cin >> ds;

    bool allZero = true;
    for (int i = 1; i < 16; i += 2)
    {
        if (ds[i] != '0')
        {
            allZero = false;
            break;
        }
    }

    if (allZero)
        std::cout << "Yes\n";
    else
        std::cout << "No\n";

    return 0;
}

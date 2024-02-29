#include <iostream>
int main()
{
    std::string str;
    std::cin >> str;
    if (str.size() >= 8 && str.size() <= 15)
    {
        int num = 0, spch = 0;
        for (auto ch : str)
        {
            if (ch >= '0' && ch <= '9')
            {
                num++;
            }
            else if (ch == '@' || ch == '#' || ch == '$' || ch == '&' || ch == '*')
            {
                spch++;
            }
        }
        if (num >= 1 && spch >= 1)
            std::cout << str << " is a valid password" << std::endl;
        else
            std::cout << str << " is a invalid password" << std::endl;
    }
}
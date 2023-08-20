#include <iostream>
#include <vector>

bool backtrack(std::vector<int> &matchsticks, std::vector<int> &sides, int currentIndex, int targetSide)
{
    if (currentIndex == matchsticks.size())
    {
        for (int side : sides)
        {
            if (side != targetSide)
            {
                return false;
            }
        }
        return true;
    }

    for (int i = 0; i < 4; ++i)
    {
        if (sides[i] + matchsticks[currentIndex] <= targetSide)
        {
            sides[i] += matchsticks[currentIndex];
            if (backtrack(matchsticks, sides, currentIndex + 1, targetSide))
            {
                return true;
            }
            sides[i] -= matchsticks[currentIndex];
        }
    }

    return false;
}

bool canMakeSquare(std::vector<int> &matchsticks)
{
    int totalLength = 0;
    for (int matchstick : matchsticks)
    {
        totalLength += matchstick;
    }

    if (totalLength % 4 != 0)
    {
        return false;
    }

    int targetSide = totalLength / 4;
    std::vector<int> sides(4, 0);
    return backtrack(matchsticks, sides, 0, targetSide);
}

int main()
{
    std::vector<int> matchsticks = {3, 3, 3, 3, 4};
    if (canMakeSquare(matchsticks))
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
    return 0;
}
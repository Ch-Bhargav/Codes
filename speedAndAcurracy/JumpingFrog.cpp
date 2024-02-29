#include <iostream>
#include <cmath>

int minJumps(int x)
{
    int jumps = 0;
    int current_position = 0;

    while (current_position < x)
    {
        jumps++;
        current_position += jumps;
    }

    // If current_position is greater than x, adjust the jumps accordingly
    if ((current_position - x) % 2 == 1)
    {
        // If the difference is odd, one more jump is needed
        jumps++;
    }
    else if ((current_position - x) % 2 == 0 && (current_position - x) % jumps != 0)
    {
        // If the difference is even but not divisible by jumps, one more jump is needed
        jumps++;
    }

    return jumps;
}

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int x;
        std::cin >> x;

        int result = minJumps(x);
        std::cout << result << '-' << std::endl;
    }

    return 0;
}

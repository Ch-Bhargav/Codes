#include <iostream>
#include <string>

int findSmallestDivisor(int i, int N)
{
    for (int j = 1; j <= 10; ++j)
    {
        if (N % j == 0 && (i % (N / j)) == 0)
        {
            return j;
        }
    }
    return -1;
}

int main()
{
    int N;
    std::cin >> N;

    std::string result = "";

    for (int i = 0; i <= N; ++i)
    {
        int smallestDivisor = findSmallestDivisor(i, N);
        if (smallestDivisor != -1)
        {
            result += std::to_string(smallestDivisor);
        }
        else
        {
            result += "-";
        }
    }

    std::cout << result << std::endl;

    return 0;
}

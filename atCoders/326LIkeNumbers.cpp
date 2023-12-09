#include <iostream>
using namespace std;
int main()
{
    int N;
    cin >> N;

    while (true)
    {
        int hundreds = N / 100;
        int tens = (N / 10) % 10;
        int ones = N % 10;

        if (hundreds * tens == ones)
        {
            std::cout << N << std::endl;
            break;
        }
        N++;
    }

    return 0;
}

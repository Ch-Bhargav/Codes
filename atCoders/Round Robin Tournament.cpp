#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N;
    std::cin >> N;
    std::vector<std::string> matches(N);

    for (int i = 0; i < N; ++i)
    {
        std::cin >> matches[i];
    }

    std::vector<int> wins(N + 1, 0);

    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            if (matches[i][j] == 'o')
            {
                wins[i + 1]++;
            }
        }
    }

    std::vector<int> sorted_players(N);
    for (int i = 0; i < N; ++i)
    {
        sorted_players[i] = i + 1;
    }

    std::sort(sorted_players.begin(), sorted_players.end(), [&](int a, int b)
              { return (wins[a] == wins[b]) ? (a < b) : (wins[a] > wins[b]); });

    for (int i = 0; i < N; ++i)
    {
        std::cout << sorted_players[i] << " ";
    }

    return 0;
}

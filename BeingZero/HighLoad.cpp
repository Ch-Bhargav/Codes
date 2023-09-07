#include <iostream>
#include <vector>

std::pair<int, std::vector<std::vector<int>>> solution(int n, int k)
{
    std::vector<std::vector<int>> edges;

    if (k == 2)
    {
        edges.push_back({1, 2});
        edges.push_back({1, 3});
        return {1, edges};
    }

    int maxDistance = (k - 1) * 2;

    for (int i = 2; i <= k + 1; ++i)
    {
        edges.push_back({1, i});
    }

    for (int i = k + 2; i <= n; ++i)
    {
        edges.push_back({i, (i - k) % (n - k + 1) + k + 1});
    }

    return {maxDistance, edges};
}

int main()
{
    int t;
    std::cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int n, k;
        std::cin >> n >> k;

        auto result = solution(n, k);
        int minDistance = result.first;
        std::vector<std::vector<int>> edges = result.second;

        std::cout << minDistance << " True" << std::endl;
        // for (const std::vector<int> &edge : edges)
        // {
        //     std::cout << edge[0] << " " << edge[1] << std::endl;
        // }
    }

    return 0;
}

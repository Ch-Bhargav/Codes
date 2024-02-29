#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> maxDel;

    for (int i = 0; i < n; ++i)
    {
        int f, d;
        cin >> f >> d;

        maxDel[f] = max(maxDel[f], d);
    }

    int maxSat = 0;

    for (const auto &e : maxDel)
    {
        int d = e.second;
        maxSat = max(maxSat, d);

        if (maxDel.find(d * 2) != maxDel.end())
        {
            int combinedDel = (e.first != d * 2) ? (d + d * 2) : (d + d * 4);
            maxSat = max(maxSat, combinedDel);
        }
    }

    cout << maxSat << endl;

    return 0;
}

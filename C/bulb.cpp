#include <iostream>
#include <vector>
using namespace std;

vector<int> bulb(int n)
{
    vector<int> result(n, 0);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i - 1; j < n; j += i)
        {
            result[j] = !result[j];
        }
    }

    return result;
}
int main()
{
    int n;
    cin >> n;
    vector<int> ans = bulb(n);
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 1)
            cout << i + 1 << " ";
    }
}
#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> arr;
void function_solve(int current, vector<int> &check)
{
    int leafNode = 0;
    if (arr[current].size() > 0)
    {
        for (int child : arr[current])
        {
            if (arr[child].size() == 0)
                leafNode++;

            else
                function_solve(child, check);
        }

        if (leafNode < 3)
            check[current] = 1;
    }
}

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;

        vector<int> check(n);
        arr.resize(n);

        for (int j = 0; j < n; ++j)
            arr[j] = vector<int>();

        for (int i = 1; i < n; i++)
        {
            int node;
            cin >> node;
            arr[node - 1].push_back(i);
        }

        function_solve(0, check);

        bool spruce = true;
        for (int z : check)
        {
            if (z == 1)
            {
                spruce = false;
                break;
            }
        }

        if (spruce)
            cout << "Yes" << endl;

        else
            cout << "No" << endl;
    }

    return 0;
}

// EX1 : BUild and print the tree

// https://ideone.com/naKt64

// 2
// 8
// 1 2
// 2 3
// 3 4
// 3 5
// 1 6
// 2 7
// 2 8
// 5
// 1 5
// 2 4
// 1 2
// 2 3
#include <bits/stdc++.h>
using namespace std;

#define loop(a, n) for (int i = a; i < n; i++)

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<vector<int>> adjList(n + 1); // Increase the size by 1

        // for (int i = 0; i < n - 1; i++)
        loop(0, n - 1)
        { // Change the loop limit to n-1
            int a, b;
            cin >> a >> b;
            adjList[a].push_back(b);
            adjList[b].push_back(a);
        }

        // printing the adjList
        cout << "Adjacency List" << endl;
        // for (int i = 1; i <= n; i++)
        loop(1, n + 1)
        { // Start from 1 to n
            cout << i << " : ";
            for (auto ele : adjList[i])
                cout << ele << " ";
            cout << endl;
        }
    }
    return 0;
}
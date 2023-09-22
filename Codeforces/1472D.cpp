#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, cnt = 1;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        long long int sum = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (cnt)
            {
                if (arr[i] % 2 == 0)
                {
                    sum += arr[i];
                }
            }
            else
            {
                if (arr[i] % 2)
                {
                    sum -= arr[i];
                }
            }

            cnt ^= 1;
        }

        if (sum > 0)
        {
            cout << "Alice";
        }
        else if (sum < 0)
        {
            cout << "Bob";
        }
        else
        {
            cout << "Tie";
        }

        cout << endl;
    }

    return 0;
}

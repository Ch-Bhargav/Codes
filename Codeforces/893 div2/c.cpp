#include <iostream>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n + 1] = {0};
        cout << 1 << " ";
        int i = 2;
        while (i <= n)
        {
            int cur = i;
            while (cur <= n and !arr[cur])
            {
                cout << cur << " ";
                arr[cur] = 1;
                cur *= 2;
            }
            i++;
        }

        cout << endl;
    }

    return 0;
}

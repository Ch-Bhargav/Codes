#include <iostream>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int sum = k * w * (w + 1) / 2;

    int difference = sum - n;

    if (difference > 0)
    {
        cout << difference << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}

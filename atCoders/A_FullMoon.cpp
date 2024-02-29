#include <iostream>

using namespace std;

int main()
{
    int N, M, P;

    cin >> N >> M >> P;

    int count = 0;
    int day = 1;

    while (day <= N)
    {
        if (day >= M && (day - M) % P == 0)
        {
            count++;
        }
        day++;
    }

    cout << count << endl;

    return 0;
}

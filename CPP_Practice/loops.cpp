#include <bits/stdC++.h>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
        cout << "HI" << endl;
    cout << "ENter the NUmber:" << endl;
    int n;
    cin >> n;
    while (n > 0)
    {
        cout << "HI" << endl;
        n /= 2;
    }
    cout << "ENter the NUmber:" << endl;
    cin >> n;
    do
    {
        cout << "HI" << endl;
        n /= 2;
    } while (n > 0);
    return 0;
}
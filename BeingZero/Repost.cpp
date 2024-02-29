#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        const string initial = "polycarp";
        map<string, long> rank;
        rank[initial] = 1;

        long n;
        cin >> n;
        long length = 0;

        while (n--)
        {
            string name1, posted, name2;
            cin >> name1 >> posted >> name2;

            transform(name2.begin(), name2.end(), name2.begin(), ::tolower);
            transform(name1.begin(), name1.end(), name1.begin(), ::tolower);

            rank[name1] = rank[name2] + 1;
            if (rank[name1] > length)
            {
                length = rank[name1];
            }
        }

        cout << length << endl;
    }
    return 0;
}

#include <iostream>
#include <cctype>
using namespace std;

string playfulReversal(int n, const string &s)
{
    string result = s;

    for (char &ch : result)
    {
        if (isalpha(ch))
        {
            ch = islower(ch) ? 'z' - (ch - 'a') : 'Z' - (ch - 'A');
        }
    }

    return result;
}

int main()
{
    // Assume T, N, and S are already defined
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        cin.ignore(); // Ignore newline after reading N

        string S;
        getline(cin, S);

        string result = playfulReversal(N, S);
        cout << result << endl;
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> find_middle_day(const vector<int> &months)
{
    int totalDays = 0;
    for (int days : months)
    {
        totalDays += days;
    }

    int middleDay = (totalDays + 1) / 2; // Adding 1 to ensure rounding up
    int month = 0;
    int day = 0;

    for (int i = 0; i < months.size(); ++i)
    {
        if (middleDay <= months[i])
        {
            month = i + 1;
            day = middleDay;
            break;
        }
        middleDay -= months[i];
    }

    return make_pair(month, day);
}

int main()
{
    int M;
    cin >> M;

    vector<int> daysInMonths(M);
    for (int i = 0; i < M; ++i)
    {
        cin >> daysInMonths[i];
    }

    pair<int, int> result = find_middle_day(daysInMonths);
    cout << result.first << " " << result.second << endl;

    return 0;
}

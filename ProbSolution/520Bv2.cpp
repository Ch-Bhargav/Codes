#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    queue<pair<int, int>> q;
    unordered_set<int> st;
    q.push(make_pair(n, 0));
    st.insert(n);
    int ans = 0;
    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();
        if (p.first == m)
        {
            ans = p.second;
            break;
        }
        if (p.first - 1 == m || p.first * 2 == m)
        {
            ans = p.second + 1;
            break;
        }
        if (p.first > 1 && st.find(p.first - 1) == st.end())
        {
            q.push(make_pair(p.first - 1, p.second + 1));
            st.insert(p.first - 1);
        }
        if (p.first <= m && st.find(p.first * 2) == st.end())
        {
            q.push(make_pair(p.first * 2, p.second + 1));
            st.insert(p.first * 2);
        }
    }
    cout << ans << endl; // Add this line to print the answer
    return 0;            // Add this line to indicate successful completion
}

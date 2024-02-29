
#include <bits/std.c++.h>
int n, m = 0, len = 0;
char s[1000006];
int d[1000006];
stack<int> st;

int maxi = 0, cnt = 1;

main()
{
    scanf("%s", s);
    n = strlen(s);

    sets(d);

    for (int i = 0; i < n; i++)
    {
        if (st.empty() || s[i] == '(')
        {
            st.push(i);
            continue;
        }

        int pos = st.top();

        if (s[pos] == '(')
        {
            if (d[pos - 1] != -1)
                d[i] = d[pos - 1];
            else
                d[i] = pos;

            len = i - d[i] + 1;
            if (len == maxi)
            {
                cnt++;
            }
            else if (len > maxi)
            {
                maxi = len;
                cnt = 1;
            }
        }

        st.pop();
    }

    printf("%d %d\n", maxi, cnt);
}

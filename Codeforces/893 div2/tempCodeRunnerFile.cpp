#include <bits/stdc++.h>
using namespace std;

#define PI 3.141592653589793238462
#define set(x) setprecision(x)
#define mp make_pair
#define f first
#define s second
#define pb push_back
const long long mod = (1e9 + 7);
const long long inf = (1e18);
typedef long long ll;
ll mul(ll x, ll y)
{
    ll res = x * y;
    return (res >= mod ? res % mod : res);
};
ll power(ll x, ll y)
{
    if (y < 0)
        return 1;
    ll res = 1;
    x %= mod;
    while (y)
    {
        if (y & 1)
            res = mul(res, x);
        y >>= 1;
        x = mul(x, x);
    }
    return res;
}

void solve()
{
    ll a, b, c, i, la, ans = 0, ansf, ansf1, ansf2, pp;
    cin >> a >> b >> c;
    ll d[b];
    for (i = 0; i < b; i++)
    {
        cin >> d[i];
    }
    ans = 1ll;
    la = 1ll;
    for (i = 0; i < b; i++)
    {
        if (d[i] == 1ll)
        {
            continue;
        }
        pp = (d[i] - la);
        if (pp % c == 0)
        {
            ans += (pp / c);
        }
        else
        {
            ans += (pp / c);
            ans++;
        }
        la = d[i];
    }
    if (d[b - 1] != a)
    {
        pp = (a - la);
        if (pp % c == 0)
        {
            ans += (pp / c);
        }
        else
        {
            ans += (pp / c);
        }
    }
    la = 1ll;
    ansf = inf;
    ll ans1;
    for (i = 0; i < (b); i++)
    {
        ans1 = ans;
        if (d[i] == 1ll)
        {
            continue;
        }
        if (i == (b - 1))
        {
            if (d[b - 1] != a)
            {
                pp = (d[i] - la);
                if (pp % c == 0)
                {
                    ans1 -= (pp / c);
                }
                else
                {
                    ans1 -= (pp / c);
                    ans1--;
                }
                pp = (a - d[i]);
                if (pp % c == 0)
                {
                    ans1 -= (pp / c);
                }
                else
                {
                    ans1 -= (pp / c);
                }
                pp = (a - la);
                if (pp % c == 0)
                {
                    ans1 += (pp / c);
                }
                else
                {
                    ans1 += (pp / c);
                }
                ansf = min(ansf, ans1);
                la = d[i];
                continue;
            }

            ansf = min(ansf, ans1 - 1ll);
            la = d[i];
            continue;
        }
        pp = (d[i] - la);
        if (pp % c == 0)
        {
            ans1 -= (pp / c);
        }
        else
        {
            ans1 -= (pp / c);
            ans1--;
        }
        pp = (d[i + 1] - d[i]);
        if (pp % c == 0)
        {
            ans1 -= (pp / c);
        }
        else
        {
            ans1 -= (pp / c);
            ans1--;
        }
        pp = (d[i + 1] - la);
        if (pp % c == 0)
        {
            ans1 += (pp / c);
        }
        else
        {
            ans1 += (pp / c);
            ans1++;
        }
        ansf = min(ansf, ans1);
        la = d[i];
    }
    la = 1ll;
    ansf1 = 0ll;
    ansf2 = inf;
    for (i = 0; i < (b); i++)
    {
        ans1 = ans;
        if (d[i] == 1ll)
        {
            continue;
        }
        if (i == (b - 1))
        {
            if (d[b - 1] != a)
            {
                pp = (d[i] - la);
                if (pp % c == 0)
                {
                    ans1 -= (pp / c);
                }
                else
                {
                    ans1 -= (pp / c);
                    ans1--;
                }
                pp = (a - d[i]);
                if (pp % c == 0)
                {
                    ans1 -= (pp / c);
                }
                else
                {
                    ans1 -= (pp / c);
                }
                pp = (a - la);
                if (pp % c == 0)
                {
                    ans1 += (pp / c);
                }
                else
                {
                    ans1 += (pp / c);
                }

                if (ansf == ans1)
                {
                    ansf1++;
                }
                la = d[i];
                continue;
            }

            if ((ans1 - 1ll) == ansf)
            {
                ansf1++;
            }

            la = d[i];
            continue;
        }
        pp = (d[i] - la);
        if (pp % c == 0)
        {
            ans1 -= (pp / c);
        }
        else
        {
            ans1 -= (pp / c);
            ans1--;
        }
        pp = (d[i + 1] - d[i]);
        if (pp % c == 0)
        {
            ans1 -= (pp / c);
        }
        else
        {
            ans1 -= (pp / c);
            ans1--;
        }
        pp = (d[i + 1] - la);
        if (pp % c == 0)
        {
            ans1 += (pp / c);
        }
        else
        {
            ans1 += (pp / c);
            ans1++;
        }

        if (ans1 == ansf)
        {
            ansf1++;
        }
        la = d[i];
    }
    cout << "Ans:" << ansf << " " << ansf1 << endl;
}
int main()
{

    long long t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
#include<bits/stdc++.h>
using namespace std;

//{
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d %d",&a,&b);
#define siii(a,b,c) scanf("%d %d %d",&a,&b,&c);

#define sl(a) scanf("%lld",&a)
#define sll(a,b) scanf("%lld %lld",&a,&b);
#define slll(a,b,c) scanf("%lld %lld %lld",&a,&b,&c);

#define outi(a) printf("%d\n",a)
#define outii(a,b) printf("%d %d\n",a,b)
#define outis(a) printf(" %d",a)

#define outl(a) printf("%lld\n",a)
#define outll(a,b) printf("%lld %lld\n",a,b)
#define outls(a) printf(" %lld",a)

#define cel(n,k) ((n-1)/k+1)
#define sets(a) memset(a, -1, sizeof(a))
#define clr(a) memset(a, 0, sizeof(a))
#define max(a,b) ((a)>(b)? (a):(b))
#define min(a,b) ((a)<(b)? (a):(b))
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define pb push_back
#define all(v) v.begin(),v.end()
#define mp make_pair
#define ff first
#define ss second
#define INF 10000007
#define fastIO() ios_base::sync_with_stdio(false); cin.tie(NULL);

typedef long long i64;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
//}

i64 n, k, x;
pll a[100005];

bool cmp(pll p, pll q){
    return (p.ff+p.ss*x) < (q.ff+q.ss*x);
}

int can(i64 q){
    i64 tmp= k, cnt= 0;

    x= q;
    sort(a+1,a+n+1,cmp);

    fr1(n){
        tmp-= a[i].ff+a[i].ss*q;

        if(tmp<0)
            break;

        cnt++;
    }

    return cnt>=q;
}

i64 getcost(i64 q){
    x= q;
    sort(a+1,a+n+1,cmp);
    i64 cost= 0;

    fr1(q){
        cost+= a[i].ff+a[i].ss*q;
    }

    return cost;
}

int main(){
    sll(n,k);

    i64 t;
    fr1(n){
        sl(t);
        a[i]= mp(t,i);
    }

    i64 lo= 0, hi= n;

    while(lo<hi){
        i64 mid= (lo+hi+1)/2;

        if(can(mid))  lo= mid;
        else  hi= mid-1;
    }

    printf("%lld %lld\n",lo,getcost(lo));
}

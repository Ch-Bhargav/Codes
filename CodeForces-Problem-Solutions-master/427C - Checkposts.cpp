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
#define fr(n) for(int i=0;i<n;i++)
#define fr1(n) for(int i=1;i<=n;i++)
#define frj(n) for(int j=0;j<n;j++)
#define frj1(n) for(int j=1;j<=n;j++)
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

const int maxn= 1e5+5;

vector<int> t[maxn], v[maxn], s;
i64 vis[maxn], parent[maxn], cost[maxn], n, m;
stack<int> st;

void reset(){
    clr(vis);
    sets(parent);
}

void dfs(int u){
    vis[u]= 1;

    fr(v[u].size()){
        int nd= v[u][i];
        if(nd==parent[u]) continue;

        if(!vis[nd]){
            parent[nd]= u;
            dfs(nd);
        }
    }

    st.push(u);
}

void scc(int u){
    vis[u]= 1;
    s.pb(u);
    //outis(u);

    fr(t[u].size()){
        int nd= t[u][i];
        if(nd==parent[u]) continue;

        if(!vis[nd]){
            parent[nd]= u;
            scc(nd);
        }
    }

}

i64 total=0, ways= 1, mod= 1e9+7;

bool cmp(int a, int b){
    return cost[a] < cost[b];
}

void solve(){
    i64 cnt= 1;

    sort(all(s),cmp);

    fr1(s.size()-1){
        if(cost[s[i]]!=cost[s[i-1]])
            break;

        cnt++;
    }


    ways= (ways* cnt)  % mod;
    total+= cost[s[0]];

    s.clear();
}

main(){
    int a,b;

    si(n);

    fr1(n){
        si(cost[i]);
    }

    si(m);

    fr(m){
        sii(a,b);

        v[a].push_back(b);
        t[b].push_back(a);
    }

    reset();

    fr1(n){
        if(!vis[i])
            dfs(i);
    }

    reset();



    while(!st.empty()){
        int i=st.top();
        st.pop();

        if(!vis[i]) {
            scc(i);

            solve();
        }
    }

    outll(total,ways);
}

/*
8 14
1 2 2 3 3 4 4 3
5 1 5 6 2 5
6 7 7 6
7 8 8 8
3 7 4 8
2 6
 */

//In the name of ALLAH//
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define F first
#define S second

// Debugging (only for local, disable before submission)
#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#else
#define dbg(x)
#endif

// Common constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const ld EPS = 1e-9;

// Type aliases
using pii = pair<int,int>;
using tlll = tuple<ll,ll,ll>;
using pll = pair<ll,ll>;
using vi = vector<int>;
using vl = vector<ll>;
using vvi = vector<vi>;
using vvl = vector<vl>;
using mlvl= map<ll,vl>;

// Functions
ll modpow(ll a, ll b, ll m = MOD) {
    ll res = 1;
    a %= m;
    while(b > 0) {
        if(b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<ll>>prdct(k);
    vector<vector<ll>>adj(n);
    vector<ll>cost(n,LONG_LONG_MAX);
    for(ll i=0;i<n;++i){
        ll temp;
        cin>>temp;
        temp--;
        prdct[temp].pb(i);
    }
    for(ll i=0;i<m;++i){
        ll u,v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }

        queue<ll>q;
        q.push(0);
        cost[0]=0;
        vector<bool>flag(n,false);
        while(!q.empty()){
            ll l=q.front();
            //cout<<l<<"\n";
            q.pop();
            for(ll i=0;i<adj[l].size();++i){
                if(!flag[adj[l][i]]){
                    flag[adj[l][i]]=true;
                    q.push(adj[l][i]);
                    cost[adj[l][i]]=min(cost[l]+1,cost[adj[l][i]]);
                }
            }
        }

    // for(ll i=0;i<n;++i){
    //     cout<<cost[i]<<"\n";
    // }
    
    for(ll i=0;i<k;++i){
        ll mn =-1;
        for(ll j=0;j<prdct[i].size();++j){
           mn=max(mn,cost[prdct[i][j]]);
           //cout<<cost[prdct[i][j]];
        }
       cout<<mn<<" ";
    }
    cout<<"\n";
}

int main() {
    fastio;
    int t = 1;
    //cin >> t; // Uncomment if multiple testcases
    while(t--) {
        solve();
    }
    return 0;
}

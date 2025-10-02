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
   ll w,y;
   cin>>w>>y;
   ll x=max(w,y);
   double res = (7-x)/6.0;
   if(res==0.0)cout<<"0/1\n";
   else if(res==1/6.0)cout<<"1/6\n";
   else if(res==1/3.0)cout<<"1/3\n";
   else if(res==0.5)cout<<"1/2\n";
   else if(res==2/3.0)cout<<"2/3\n";
   else if(res==5/6.0)cout<<"5/6\n";
   else cout<<"1/1\n";
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

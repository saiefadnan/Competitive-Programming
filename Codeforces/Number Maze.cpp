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
vector<string>codes;

void permutation(string s, string curr){
    if(s.empty()){
        codes.pb(curr);
    }
    for(ll i=0;i<s.length();++i){
        curr.pb(s[i]);
        //cout<<"add: "<<s[i]<<"\n";
        s.erase(i,1);
        permutation(s,curr);
        s.insert(s.begin()+i,curr[curr.length()-1]);
        //cout<<"remove: "<<s[i]<<"\n";
        curr.pop_back();
    }
}

void solve() {
    codes.clear();
    string s;
    cin>>s;
    ll j,k;
    cin>>j>>k;
    permutation(s,"");
    ll same=0;
    // for(ll i=0;i<codes.size();++i){
    //     cout<<codes[i]<<"\n";
    // }
    for(ll i=0;i<s.length();++i){
        //cout<<codes[j-1]<<"   "<<codes[k-1];
        if(codes[j-1][i]==codes[k-1][i])same++;
    }
    cout<<same<<"A"<<s.length()-same<<"B"<<"\n";
}

int main() {
    fastio;
    int t = 1;
    cin >> t; // Uncomment if multiple testcases
    while(t--) {
        solve();
    }
    return 0;
}

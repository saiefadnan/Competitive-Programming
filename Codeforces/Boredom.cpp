#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;
ll dp[100001];

void init(ll i){
    for(ll j=0;j<=i;++j)dp[j]=-1;
}

ll dynamic(map<ll,ll>& freq,ll n){
    if(dp[n]!=-1)return dp[n];
    if(n==0)return dp[0]=0;
    if(n==1)return dp[1]=freq[1];
    if(n>=2)return dp[n]=max(dynamic(freq,n-1),dynamic(freq,n-2)+freq[n]*n);
}

int main(){
    fastio
    ll n;
    cin>>n;
    map<ll,ll>freq;
    ll mx=-1;
    for(ll i=0;i<n;++i){
        ll val;
        cin>>val;
        freq[val]++; 
        mx=max(val,mx);
    }
    init(mx);
    cout<<dynamic(freq,mx);
    return 0;
}
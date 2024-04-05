#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;
map<ll,ll>dp;
void init(){
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    dp[3]=1;
    dp[4]=2;
    dp[5]=3;
    dp[6]=1;
    dp[7]=2;
    dp[8]=3;
    dp[9]=2;
    dp[10]=1;
    dp[11]=2;
    dp[12]=2;
    dp[13]=2;
    dp[14]=3;
    dp[15]=1;
}

ll dynamic_(ll n){
    if(n>15){
        if(n%15<5)return n/15+dp[n%15];
        else return min(n/15+1+dp[n%15-5],n/15+dp[n%15]);
    }
    else return dp[n];
}

int main(){
    init();
    fastio
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<dynamic_(n)<<"\n";
    }
    return 0;
}
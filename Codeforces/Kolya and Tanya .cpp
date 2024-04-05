#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);   
ll power(ll x,ll n){
    ll m=1;
    while(n--){
        m=(x*m+MOD) % MOD;
    }
    return m;
}

int main(){
    fastio
    ll n;
    cin>>n;
    cout<<(power(27,n)-power(7,n)+MOD) % MOD;
    return 0;
}
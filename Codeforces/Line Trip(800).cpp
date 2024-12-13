#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n,x;
    ll mx = -1;
    cin>>n>>x;
    ll fuel[n];
    for(ll i=0;i<n;++i){
        cin>>fuel[i];
        if(i==0)mx = fuel[i];
        if(i==n-1 && mx < 2*(x-fuel[i]))mx = 2*(x-fuel[i]);
        if(i>0 && mx < fuel[i]-fuel[i-1])mx = fuel[i]-fuel[i-1];
    }
   cout<<mx<<"\n";
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

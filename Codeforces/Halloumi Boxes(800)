#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n,k;
    cin>>n>>k;
    ll arr[n];
    bool sorted = true;
    ll temp = -1;
    for(ll i=0;i<n;++i){
        cin>>arr[i];
        if(temp == -1)temp=arr[i];
        else if(temp > arr[i]) sorted = false;
        else temp = arr[i];
    }
    if(k>1)cout<<"YES\n"; 
    else if(k==1 && (n==1 || (n>1 && sorted)))cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

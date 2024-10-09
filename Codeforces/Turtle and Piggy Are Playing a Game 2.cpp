#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n; 
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;++i)cin>>arr[i];
        sort(arr,arr+n);
        cout<<arr[n/2]<<"\n";
    }
    return 0;
}

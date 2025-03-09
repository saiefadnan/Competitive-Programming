#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll k;
    cin>>k;
    while(k--){
        ll n,x,t,cnt=0;
        cin>>n>>x>>t;
        if(n>=t/x)cout<<(n-t/x)*(t/x)+(t/x-1)*(t/x)/2<<"\n";
        else cout<<n*(n-1)/2<<"\n";
    }
    return 0;
}

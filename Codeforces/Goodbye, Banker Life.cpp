#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void recurr(ll n,ll k){
    if(n==1){
        cout<<k<<" ";
        return;
    }
    ll m = log2(n);
    m  = pow(2,m);
    //cout<<n<<" "<<m<<"\n";
    if(n==m){
        for(ll i=0;i<n;++i)cout<<k<<" "; 
        return;
    }
    recurr(n-m,k);
    for(ll i=0;i<2*m-n;++i)cout<<"0 ";
    recurr(n-m,k);
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        recurr(n,k);
        cout<<"\n";
    }
    return 0;
}      

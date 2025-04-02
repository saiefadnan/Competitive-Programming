#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long 
const ll MOD = 1e18+1;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll x,y;
        cin>>x>>y;
        if(x==y) cout<<"-1\n";
        else{
            x=max(x,y);
            ll p = log2(x);
            ll k=pow(2,p+1)-x;
            cout<<k<<"\n";
            //if(x+2*k+y==(x+k)^(y+k))cout<<"correct!";
        }
    }
    return 0;
}

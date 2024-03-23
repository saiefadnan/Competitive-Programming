#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;

int main(){
    fastio  
    ll t;
    cin>>t;
    while(t--){
        ll n,c,q;
        cin>>n>>c>>q;
        string s;
        cin>>s;
        vector<ll>left(c+1),right(c+1),diff(c+1);
        left[0]=0;
        right[0]=n;
        for(ll i=1;i<=c;++i){
            ll l,r;
            cin>>l>>r;
            left[i]=right[i-1];
            right[i]=left[i]+r-l+1;
            diff[i]=left[i]-l+1;
        }
        while(q--){
            ll k;
            cin>>k;
            if(k>n){
                for(ll i=c;i>=1;--i){
                    if(left[i]+1>k)continue;
                    else k-=diff[i];
                }
            }
            cout<<s[k-1]<<"\n";
        }
    }
    return 0;
}

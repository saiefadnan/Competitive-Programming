#include <bits/stdc++.h>
#define ll long long
#define ld long double
using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll k;
        cin>>k;
        if(!k){
            cout<<"2\n1 2 \n3 4\n";
        }
        else{
            ll x=1,y=1;
            ll res=0;
            vector<pair<ll,ll>>print;
            while(k){
                ld n = (1+sqrt(1+8*k))/2;
                ll l = n;
                ll c = l*(l-1)/2;
                k-=c;
                res+=l;
                for(ll i=0;i<l;++i){
                    print.push_back({x,y});
                    //cout<<x<<" "<<y<<"\n";
                    ++y;
                }
                ++x;
            }
            cout<<res<<"\n";
            for(auto it:print){
                cout<<it.first<<" "<<it.second<<"\n";
            }
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        map<char,ll>freq;
        ll n,k;
        string s;
        cin>>n>>k;
        cin>>s;
        for(ll i=0;i<n;++i){
            freq[s[i]]++;
        }
        if(k>n){
            cout<<"YES\n";
            return 0;
        }
        ll l=n-k;
        l=l-l%2;
        for(auto it:freq){
            l-=it.second-it.second%2;
            //cout<<"l:"<<l<<"\n";
        }
        if(l<=0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}

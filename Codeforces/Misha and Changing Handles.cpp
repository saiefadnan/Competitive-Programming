#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    cin.ignore();
    map<string,string>handles;
    map<string,string>rev;
    for(ll i=0;i<n;++i){
        string n,o;
        cin>>o>>n;
        if(rev.count(o)){
            handles[rev[o]]=n;
            rev[n]=rev[o];
            continue;
        }
        handles[o]=n;
        rev[n]=o;
    }
    cout<<handles.size()<<"\n";
    for(auto it:handles){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    return 0;
}

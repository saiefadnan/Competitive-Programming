#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;

int main(){
    fastio
    ll n;
    cin>>n;
    string name;
    ll m;
    vector<pair<ll,string>>mem;
    map<string,ll>val;
    map<string,string>print;
    map<ll,ll>freq;
    for(ll i=0;i<n;++i){
        cin>>name>>m;
        if(m>val[name])val[name]=m;
    }
    for(auto it:val){
        freq[it.second]++;
        mem.push_back({it.second,it.first});
    }
    n=mem.size();
    sort(mem.begin(),mem.end());
    for(ll i=0;i<n;++i){
        if(i>0 && mem[i].first==mem[i-1].first){
            print[mem[i].second]=print[mem[i-1].second];
            continue;
        }
        if(1.0*(n-i-freq[mem[i].first])/n>0.5)print[mem[i].second]="noob";
        else if(1.0*(n-i-freq[mem[i].first])/n>0.2 && 1.0*(i+freq[mem[i].first])/n>=0.5) print[mem[i].second]="random";
        else if(1.0*(n-i-freq[mem[i].first])/n>0.1 && 1.0*(i+freq[mem[i].first])/n>=0.8)print[mem[i].second]="average";
        else if(1.0*(n-i-freq[mem[i].first])/n>0.01 && 1.0*(i+freq[mem[i].first])/n>=0.9)print[mem[i].second]="hardcore";            
        else if(1.0*(i+freq[mem[i].first])/n>=0.99)print[mem[i].second]="pro";
    }
    cout<<val.size()<<"\n";
    for(auto it:val)cout<<it.first<<" "<<print[it.first]<<"\n";
    return 0;
}
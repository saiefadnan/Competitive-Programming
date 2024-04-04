#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;

ll n;
vector<pair<ll,ll>>lef,righ,print;
map<ll,ll>dp;

bool checkl(ll i){ 
    if(print.empty())return true;
    if(print.size()>0 && lef[i].first<=print[i-1].second)return false;  
    return true;
}

bool checkr(ll i){
    if(print.empty())return true;
    if(i<n-1 && righ[i].second>=righ[i+1].first)return false; 
    return true;
}

ll recurr(ll i){
    if(dp.count(i)>0){
        return dp[i];
    }
    if(i==n)return 0;
    ll v1=-1,v2=-1,v3=-1;
    if(checkl(i)){
        print.push_back(lef[i]);
        v1=1+recurr(i+1);
        print.pop_back();
    }
    if(checkr(i)==1){
        print.push_back(righ[i]);
        v2=1+recurr(i+1);
        print.pop_back();
    }
    print.push_back({righ[i].first,lef[i].second});
    v3=recurr(i+1);
    print.pop_back();
    return dp[i]=max(max(v1,v2),v3);
}

int main(){
    fastio
   
    cin>>n;
    
    for(ll i=0;i<n;++i){
        ll x,h;
        cin>>x>>h;
        lef.push_back({x-h,x});
        righ.push_back({x,x+h});
    }
    
    cout<<recurr(0);
    return 0;
}
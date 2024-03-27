#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;

int main(){
    fastio
    ll n;
    cin>>n;
    vector<ll>tree;
    vector<ll>print1,print2;
    map<ll,vector<ll>>mem;
    set<ll>zen;
    for(ll i=0;i<n;++i){
        ll val;
        cin>>val;
        mem[val].push_back(i);
        tree.push_back(val);
        zen.insert(val);
    }
    ll ans=LONG_LONG_MIN,l,r;
    for(auto it:zen){
        if(mem[it].size()>=2){
            for(ll i=0;i<mem[it].size()-1;++i){
                for(ll j=i+1;j<mem[it].size();++j){
                    ll sum=tree[mem[it][i]]+tree[mem[it][j]];
                    for(ll k=mem[it][i]+1;k<mem[it][j];++k){
                        if(tree[k]>0)sum+=tree[k];
                        else print1.push_back(k+1);
                    }
                    if(sum>ans){
                        l=mem[it][i]+1;
                        r=mem[it][j]+1;
                        ans=sum;
                        print2=print1;
                    }
                    else print1.clear();
                }
            }
        }
    }
    cout<<ans<<" "<<print2.size()+n-(r-l+1)<<"\n";
    for(ll i=1;i<l;++i)cout<<i<<" ";
    for(auto it:print2)cout<<it<<" ";
    for(ll i=r+1;i<=n;++i)cout<<i<<" ";
    return 0;
}

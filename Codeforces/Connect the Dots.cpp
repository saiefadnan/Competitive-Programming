#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll p[200000];
ll rank1[200000];
ll res;

void init(ll m){
    res = m-1;
    for(ll i=0;i<m;++i){
        p[i]=i;
        rank1[i]=0;
    }
}
ll find(ll z){
    if(p[z]==z) return z;
    return p[z]=find(p[z]);
}

void union1(ll p1,ll q1){
    ll x = find(p1);
    ll y = find(q1);
    if(x==y) return;
    res--;
    if(rank1[x]>rank1[y]){
        p[y]=x;
    }
    else if(rank1[x]<rank1[y]){
        p[x]=y;
    }
    else{
        p[x]=y;
        rank1[x]++;
    }
}
int main(){
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<vector<ll>>dp(n+1,vector<ll>(11,0));
        init(n+1);
        ll a,d,k;
        while(m--){
            cin>>a>>d>>k;
            dp[a][d]=max(dp[a][d],k);
        }
        for(ll i=1;i<=10;++i){
            for(ll j=1;j+i<=n;j++){
                dp[j+i][i]=max(dp[j][i]-1,dp[j+i][i]);
                if(dp[j][i]>0){
                    union1(j,j+i);
                }
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}

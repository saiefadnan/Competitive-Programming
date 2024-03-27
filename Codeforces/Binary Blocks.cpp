#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;

int main(){
    fastio
    ll m,n;
    cin>>n>>m;
    string px[n];
    ll tb[n+1][m+1];
    for(ll i=0;i<n+1;++i)tb[i][0]=0;
    for(ll i=0;i<m+1;++i)tb[0][i]=0;
    for(ll i=0;i<n;++i)cin>>px[i];
    for(ll i=1;i<n+1;++i){
        for(ll j=1;j<m+1;++j){
            tb[i][j]=tb[i-1][j]+tb[i][j-1]-tb[i-1][j-1]+(px[i-1][j-1]-'0');
        }
    }
    ll a=LONG_LONG_MAX;
    for(ll k=2;k<=max(m,n);++k){
        ll ans=0;
        for(ll i=0;i<n+1;i+=k){
            for(ll j=0;j<m+1;j+=k){
                ll c1=0;
                if(i+k>n && j+k>m)c1+=tb[n][m]-tb[n][j]-tb[i][m]+tb[i][j];
                else if(j+k>m)c1+=tb[i+k][m]-tb[i+k][j]-tb[i][m]+tb[i][j];
                else if(i+k>n)c1+=tb[n][j+k]-tb[n][j]-tb[i][j+k]+tb[i][j];
                else c1+=tb[i+k][j+k]-tb[i+k][j]-tb[i][j+k]+tb[i][j];
                ans+=min(k*k-c1,c1);
                //cout<<i+k<<" "<<j+k<<" "<<m<<" "<<c1<<"\n";
            }
        }
        a=min(ans,a);
    }
    cout<<a;
    return 0;
}
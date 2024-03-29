#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;

int main(){
    fastio
    ll n,l=0;
    string brck;
    cin>>n>>brck;
    vector<ll>height(n);
    ll mx1=-1;
    while(l<n){
        ll h=-1;
        while(l<n){
            if(brck[l]=='['){
                h+=2;
                height[l]=h;
            }
            else{
                height[l]=h;
                if(h==1)break;
                h-=2;
            }
            mx1=max(mx1,h);
            ++l;
        }
        ++l;
    }
    ll size=0;
    for(ll i=0;i<n;++i){
        height[i]=mx1-height[i]+1;
        if(i>0 && height[i]==height[i-1] && brck[i-1]=='[' && brck[i]==']')size+=3;
    }
    char print[mx1+2][n+size];
    for(ll i=0;i<mx1+2;++i){
        for(ll j=0;j<n+size;++j)print[i][j]=' ';
    }
    for(ll i=0,p=0;i<n+size && p<n;++i){
        ll k=(mx1-height[p])/2;
        if(p>0 && height[p]==height[p-1] && brck[p-1]=='[' && brck[p]==']')i+=3;
        if(brck[p]=='['){
            print[k][i]='+';
            print[k][i+1]='-';
            print[k+height[p]+1][i]='+';
            print[k+height[p]+1][i+1]='-';
        }
        else{
            print[k][i-1]='-';
            print[k][i]='+';
            print[k+height[p]+1][i-1]='-';
            print[k+height[p]+1][i]='+';
        }
        for(ll j=k+1;j<=k+height[p];++j)print[j][i]='|';
        ++p;
    }
    for(ll i=0;i<mx1+2;++i){
        for(ll j=0;j<n+size;++j){
            cout<<print[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
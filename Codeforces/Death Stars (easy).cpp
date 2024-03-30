#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;

int main(){
    fastio
    ll n;
    cin>>n;
    string map1[n];
    string map2[n];
    for(ll i=0;i<n;++i)cin>>map1[i];
    for(ll i=0;i<n;++i)cin>>map2[i];
    bool ans=1;
    for(ll i=0;i<n;++i){
        if(map1[i]!=map2[i]){
            ans=0;
            break;
        }
    }
    if(ans){
        cout<<"Yes\n";
        return 0;
    }
    ans=1;
    for(ll i=0;i<n;++i){
        for(ll j=n-1;j>=0;--j){
            if(map1[i][j]!=map2[i][n-1-j]){
                ans=0;
                break;
            }
        }
        if(!ans)break;
    }
    if(ans){
        cout<<"Yes\n";
        return 0;
    }
    ans=1;
    for(ll i=n-1;i>=0;--i){
        if(map1[i]!=map2[n-1-i]){
            ans=0;
            break;
        }
    }
    if(ans){
        cout<<"Yes\n";
        return 0;
    }
    ans=1;
    for(ll i=n-1;i>=0;--i){
        for(ll j=n-1;j>=0;--j){
            if(map1[i][j]!=map2[n-1-i][n-1-j]){
                ans=0;
                break;
            }
        }
        if(!ans)break;
    }
    if(ans){
        cout<<"Yes\n";
        return 0;
    }
    ////////////////////////////
    ans=1;
    for(ll i=0;i<n;++i){
        for(ll j=0;j<n;++j){
            if(map1[j][i]!=map2[i][j]){
                ans=0;
                break;
            }
        }
        if(!ans)break;
    }
    if(ans){
        cout<<"Yes\n";
        return 0;
    }
    ans=1;
    for(ll i=n-1;i>=0;--i){
        for(ll j=n-1;j>=0;--j){
            if(map1[j][i]!=map2[n-1-i][n-1-j]){
                ans=0;
                break;
            }
        }
        if(!ans)break;
    }
    if(ans){
        cout<<"Yes\n";
        return 0;
    }
    ans=1;
    for(ll i=n-1;i>=0;--i){
        for(ll j=0;j<n;++j){
            if(map1[j][i]!=map2[n-1-i][j]){
                ans=0;
                break;
            }
        }
        if(!ans)break;
    }
    if(ans){
        cout<<"Yes\n";
        return 0;
    }
    ans=1;
    for(ll i=0;i<n;++i){
        for(ll j=n-1;j>=0;--j){
            if(map1[j][i]!=map2[i][n-1-j]){
                ans=0;
                break;
            }
        }
        if(!ans)break;
    }
    if(ans)cout<<"Yes\n";
    else cout<<"No"<<"\n";
    return 0;
}

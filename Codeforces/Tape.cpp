    #define ll long long
    #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
    #include<bits/stdc++.h>
    using namespace std;
    bool compare(ll a,ll b){
        return a>b;
    }
    int main(){
        fastio 
        ll n,m,k;
        cin>>n>>m>>k;
        ll arr[n],diff[n-1];
        map<ll,ll>ind;
        for(ll i=0;i<n;++i){
            cin>>arr[i];
            if(i>0){
                diff[i-1]=arr[i]-arr[i-1];
                ind[diff[i-1]]=i-1;
            }
        }
        sort(diff,diff+n-1,compare);
        ll x=0,sum=0;
        for(ll i=0;i<k-1;++i){
            sum+=(arr[ind[diff[i]]]-arr[x]+1);
            x=ind[diff[i]]+1;
        }
        sum+=(arr[n-1]-arr[x]+1);
        cout<<sum;
        return 0;
    }

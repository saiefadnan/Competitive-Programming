    #define ll long long
    #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        fastio 
        ll n,q;
        pair<ll,ll>v1,v2;
        cin>>n>>q;
        vector<vector<ll>>floor;
        floor.resize(2,vector<ll>(n));
        ll count=0;
        while(q--){
            ll r,c;
            cin>>r>>c;
            if(floor[r-1][c-1]==0){
                floor[r-1][c-1]=1;
                if(r==1){
                    if(c>=1 && floor[1][c-1]==1)count++;
                    if(c>=2 && floor[1][c-2]==1)count++;
                    if(c<n && c>=0 && floor[1][c]==1)count++;
                }
                else{
                    if(c>=1 && floor[0][c-1]==1)count++;
                    if(c>=2 && floor[0][c-2]==1)count++;
                    if(c<n && c>=0 && floor[0][c]==1)count++;
                }
            }
            else {
                floor[r-1][c-1]=0;
                 if(r==1){
                    if(c>=1 && floor[1][c-1]==1)count--;
                    if(c>=2 && floor[1][c-2]==1)count--;
                    if(c<n && c>=0 && floor[1][c]==1)count--;
                }
                else{
                    if(c>=1 && floor[0][c-1]==1)count--;
                    if(c>=2 && floor[0][c-2]==1)count--;
                    if(c<n && c>=0 && floor[0][c]==1)count--;
                }
                if(count<0)count=0;
            }
            if(count>0)cout<<"No\n";
            else cout<<"Yes\n";
        }
        return 0;
    }

#pragma GCC optimize("O3", "unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  


class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        ll ans=0;
        ll n=grid.size();
        ll m=grid[0].size();
        for(ll i=0;i<n;++i){
            for(ll j=0;j<m;++j){
                if(grid[i][j]){
                    if(!i)ans++;
                    else ans+=(1-grid[i-1][j]);
                    if(i+1==n)ans++;
                    else ans+=(1-grid[i+1][j]);
                    if(!j)ans++;
                    else ans+=(1-grid[i][j-1]);
                    if(j+1==m)ans++;
                    else ans+=(1-grid[i][j+1]);
                }
            }
        }
        return ans;
    }
};

int main(){
  vector<vector<int>>grid={{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};
  cout<<Solution().islandPerimeter(grid);
  return 0;
}

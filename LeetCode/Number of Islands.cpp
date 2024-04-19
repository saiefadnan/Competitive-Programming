#pragma GCC optimize("O3", "unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

auto init = []() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  return 'c';
}();

class Solution {
public:
    ll n,m;
    void btrack(vector<vector<char>>& grid,ll i,ll j){
        grid[i][j]='0';
        if(i>0 && grid[i-1][j]=='1')btrack(grid,i-1,j);
        if(i<m-1 && grid[i+1][j]=='1')btrack(grid,i+1,j);
        if(j>0 && grid[i][j-1]=='1')btrack(grid,i,j-1);
        if(j<n-1 && grid[i][j+1]=='1')btrack(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        n = grid[0].size();
        ll ans=0;
        for(ll i=0;i<m;++i){
            for(ll j=0;j<n;++j){
                if(grid[i][j]=='1'){
                    btrack(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
};

int main(){
  vector<vector<char>>grid={{'1','1','0','0','0'},{'1','1','0','0','0'},{'0','0','1','0','0'},{'0','0','0','1','1'}};
  cout<<Solution().numIslands(grid);
  return 0;
}

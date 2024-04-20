#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

class Solution {
public:
    ll m,n,p,q;
    void search(vector<vector<int>>& land,ll i,ll j){
        land[i][j]=0;
        p=max(p,i);q=max(q,j);
        if(j+1<n && land[i][j+1])search(land,i,j+1);
        else if(i+1<m && land[i+1][j])search(land,i+1,j);
        else if(j>0 && land[i][j-1])search(land,i,j-1);
        else if(i>0 && land[i-1][j])search(land,i-1,j);
    }

    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        m=land.size();
        n=land[0].size();
        vector<vector<int>>ans;
        for(ll i=0;i<m;++i){
            for(ll j=0;j<n;++j){
                if(land[i][j]){
                    p=q=-1;
                    search(land,i,j);
                    ans.push_back({i,j,p,q});
                }
            }
        }
        return ans;
    }
};

int main(){
  vector<vector<int>>land={{1,0,0},{0,1,1},{0,1,1}};
  Solution().findFarmland(land);
  return 0;
}

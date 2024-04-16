#pragma GCC optimize("O3", "unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        ll freq[50001]={0};
        ll mx=1,mn=50000;
        for(auto it:nums){
            freq[it]++;
            mx=max(mx,it);
            mn=min(mn,it);
        }
        ll steps=0;
        ll count=1;
        for(ll i=mn+1;i<=mx;++i){
            if(freq[i]>0){
                steps+=count*freq[i];
                count++;
            }
        }
        return steps;
    }
    
};

int main(){
    fastio
    vector<ll>t={5,1,3};
    //vector<vector<char>>t={{'0'}};
    //vector<vector<char>>t={{'1'}};
    cout<<Solution().reductionOperations(t);

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    vector<ll> twoSum(vector<ll>& nums, ll target) {
        vector<ll>print(2);
        map<ll,ll>mp;
        for(ll i=0;i<nums.size();++i){
            if(mp.count(target-nums[i])>0){
                print[0]=i;
                print[1]=mp[target-nums[i]];
                return print;
            }
            mp[nums[i]]=i;
        }
        return print;
    }
};

int main(){
    fastio
    vector<ll>nums={3,2,4};
    //vector<ll>nums={2,7,11,15};
    vector<ll>print=Solution().twoSum(nums,6);
    for(auto it:print)cout<<it<<" ";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    ll n,m,sz;
    vector<ll>print;
    double avg(vector<int>& nums1,vector<int>& nums2,ll i,ll j){
        if(sz%2!=0 && print.size()==sz/2+1)return (double)(print[sz/2]);
        if(sz%2==0 && print.size()==sz/2+1)return (double)(print[sz/2-1]+print[sz/2])/2;
        if(i>=n){
            print.push_back(nums2[j]);
            return avg(nums1,nums2,i,j+1);
        }
        if(j>=m){
            print.push_back(nums1[i]);
            return avg(nums1,nums2,i+1,j);
        }
        if(nums1[i]<nums2[j]){
            print.push_back(nums1[i]);
            return avg(nums1,nums2,i+1,j);
        }
        print.push_back(nums2[j]);
        return avg(nums1,nums2,i,j+1);
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        n=nums1.size(),m=nums2.size();
        sz=n+m;
        return avg(nums1,nums2,0,0);
    }
};

int main(){
    fastio
    Solution s;
    vector<ll>nums1={1,2};
    vector<ll>nums2={3,4};
    cout<<Solution().findMedianSortedArrays(nums1,nums2)<<"\n";
    return 0;
}
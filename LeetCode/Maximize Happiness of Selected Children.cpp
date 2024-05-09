#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
#define ll int 

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(),happiness.rend());
        long long ans=0;
        for(int i=0;i<k;++i){
            ans+=max(0,happiness[i]-i);
        }
        return ans;
    }
};

int main(){
    fastio
    vector<int>happiness={1,2,3};
    int k=2;
    cout<<Solution().maximumHappinessSum(happiness,k);
    return 0;
}

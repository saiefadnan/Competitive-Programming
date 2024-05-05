#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
#define ll int 

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size(),count=0;
        int l=0,r=n-1;
        sort(people.begin(),people.end());
        while(l<r){
            if(people[l]+people[r]<=limit){
                count++;
                l++;
                r--;
            }
            else r--;
        }
        return n-count;
    }
};

int main(){
    fastio
    vector<int>people={3,2,2,1};
    int limit=3;
    cout<<Solution().numRescueBoats(people,limit);
    return 0;
}

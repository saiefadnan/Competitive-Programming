#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int>q;
        for(int i=0;i<tickets.size();++i)q.push(i);
        int t=0;
        while(tickets[k]!=0 ){
            int i=q.front();
            if(tickets[i]>0){
                tickets[i]--;
                ++t;
            }
            q.pop();
            if(tickets[i]!=0)q.push(i);
        }

        return t;
    }
};

int main(){
    fastio
    vector<int>t={5,1,1,1};
    cout<<Solution().timeRequiredToBuy(t,0);
}
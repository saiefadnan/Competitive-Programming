#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
#define ll int 

class Solution {
public:
    bool state[10000]={0};
    ll start(vector<string>& deadends, string target){
        if(state[0])return -1;
        if(target=="0000")return 0;
        queue<pair<string,int>>q;
        q.push({"0000",0});
        state[0]=1;
        while(!q.empty()){
            pair<string,int>k=q.front();
            q.pop();
            if(k.first==target)return k.second;
            for(ll i=0;i<4;++i){
                string cp=k.first;
                cp[i]=((k.first[i]-'0'+1)%10)+'0';
                if(!state[stoi(cp)]){
                    state[stoi(cp)]=1;
                    q.push({cp,k.second+1});
                }
                cp[i]=((k.first[i]-'0'+9)%10)+'0';
                if(!state[stoi(cp)]){
                    state[stoi(cp)]=1;
                    q.push({cp,k.second+1});
                }
            }
        }
        return -1;
    }
    int openLock(vector<string>& deadends, string target){
        for(ll i=0;i<deadends.size();++i)state[stoi(deadends[i])]=1;
        return start(deadends,target);
    }
};

int main(){
    fastio
    vector<string>deadends={"0201","0101","0102","1212","2002"};
    cout<<Solution().openLock(deadends,"0202");
    return 0;
}

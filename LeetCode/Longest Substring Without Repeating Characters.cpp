#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    ll lengthOfLongestSubstring(string s) {
        map<char,vector<ll>>mp;
        ll ans=0;
        for(ll i=0;i<s.length();++i)mp[s[i]].push_back(s[i]);
        for(ll i=0;i<mp.size();++i){
            for(ll j=0;j+1<mp[i].size();++j){
                ans=max(ans,mp[i][j+1]-mp[i][j]);
            }
        }
        return ans;
    }
};
int main(){
    fastio
    string word;
    cin>>word;
    cout<<Solution().lengthOfLongestSubstring(word)<<"\n";
    return 0;
}
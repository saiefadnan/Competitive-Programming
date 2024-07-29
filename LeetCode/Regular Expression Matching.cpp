#include<bits/stdc++.h>
using namespace std;
#define ll int

short int dp[21][21];
class Solution {
public:
    bool match(string s,string p,ll i,ll j){
        if(i==s.length() && j==p.length())return dp[i][j]=1;
        if(dp[i][j]!=-1)return dp[i][j];
        else if(j+1<p.length() && p[j+1]=='*'){
            if(i<s.length() && (s[i]==p[j] || p[j]=='.'))return dp[i][j]=match(s,p,i+1,j) || match(s,p,i,j+2);
            else return dp[i][j]=match(s,p,i,j+2);
        }
        else if(i<s.length() && j<p.length() && (s[i]==p[j] || p[j]=='.'))return dp[i][j]=match(s,p,i+1,j+1);
        return dp[i][j]=0;
    }
    bool isMatch(string s, string p){
        memset(dp,-1,sizeof(dp));
        return match(s,p,0,0);
    }
};

int main(){
    Solution s;
    string a,b;
    cin>>a>>b;
    cout<<s.isMatch(a,b);
    return 0;
}

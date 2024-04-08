#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    bool recurr(string s,ll i,ll j,vector<vector<ll>>& dp){
        if(i==0 && j==s.length())return true;
        if(j==s.length())return false;
        if(dp[i][j]!=-1)return dp[i][j];
        if(s[j]=='(')return recurr(s,i+1,j+1,dp);
        if(s[j]==')' && i>0)return recurr(s,i-1,j+1,dp);
        else if(s[j]=='*'){
            bool v2=0;
            bool v1=recurr(s,i+1,j+1,dp);
            if(i>0)v2=recurr(s,i-1,j+1,dp);
            bool v3=recurr(s,i,j+1,dp);
            return dp[i][j]=v1|v2|v3;
        }
        return false;
    }
    bool checkValidString(string s) {
        ll n=s.length()+1;
        vector<vector<ll>>dp(n,vector<ll>(n,-1));
        return recurr(s,0,0,dp);
    }
};

int main(){
    fastio
    Solution s;
    cout<<s.checkValidString("()")<<"\n";
    cout<<s.checkValidString("(")<<"\n";
    cout<<s.checkValidString("(*)")<<"\n";
    cout<<s.checkValidString("((((()(()()()*()(((((*)()*(**(())))))(())()())(((())())())))))))(((((())*)))()))(()((*()*(*)))(*)()")<<"\n";
    cout<<s.checkValidString("(((((*(()((((*((**(((()()*)()()()*((((**)())*)*)))))))(())(()))())((*()()(((()((()*(())*(()**)()(())")<<"\n";
    return 0;
}
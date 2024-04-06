#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  
vector<int>dp(101,-1);

ll recurr(string s,ll i){
    if(dp[i]!=-1)return dp[i];
    if(s.length()==i)return 1;
    ll v1=0,v2=0;
    if(s[i]!='0'){
        v1=recurr(s,i+1);
    }
    if(i+2<=s.length() && s[i]!='0' && (s[i]-'0')*10+(s[i+1]-'0')<=26){
        v2=recurr(s,i+2);
    }
    return dp[i]=v1+v2;
}

int main(){
    fastio
    string s;
    cin>>s;
    cout<<recurr(s,0);
    return 0;
}
#pragma GCC optimize("O3", "unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    int myAtoi(string s){
        bool start=false;
        long long num=0;
        int si=1;
        for(int i=0;i<s.size();++i){
            if(!start && s[i]==' ')continue;
            if(!start && s[i]=='+' && i+1<s.size() && s[i+1]-'0'>=0 && s[i+1]-'0'<=9)si=1;
            else if(!start && s[i]=='-' && i+1<s.size() && s[i+1]-'0'>=0 && s[i+1]-'0'<=9)si=-1;
            else if(s[i]-'0'>=0 && s[i]-'0'<=9){
                num=num*10+(s[i]-'0');
                if(si==1 && num>INT_MAX)return INT_MAX;
                if(si==-1 && num+INT_MIN>0)return INT_MIN;
                start=true;
                cout<<num<<"\n";
            }
            else break;
        }
        return (int)(num)*si;
    }
};

int main(){
    fastio
    cout<<Solution().myAtoi("words and 987")<<"\n";
    cout<<Solution().myAtoi("-421")<<"\n";
    cout<<Solution().myAtoi("-2147483648")<<"\n";
    return 0;
}
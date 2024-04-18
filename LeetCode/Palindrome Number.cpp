#pragma GCC optimize("O3", "unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  


class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return 0;
        int rev=x;
        long v=0;
        while(rev){
            v=rev%10+v*10;
            if(v>INT_MAX)return 0;
            rev=rev/10;
        }
        return x==(int)v;
    }
};

int main(){
  int x;
  cin>>x;
  cout<<Solution().isPalindrome(x);
  return 0;
}

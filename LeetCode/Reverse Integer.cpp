#pragma GCC optimize("O3", "unroll-loops")
#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    int reverse(int x) {
        int a=abs(x);
        long long num=0;
        while(a){
            if((x>=0 && num*10+a%10>INT_MAX) || (x<0 && num*10+a%10+INT_MIN>0))return 0;
            num=(num*10+a%10);
            a=a/10;
        }
        return x>=0?(int)num:(int)num*(-1);
    }
};

int main(){
    fastio
    int t;
    cin>>t;
    cout<<Solution().reverse(t);
    return 0;
}
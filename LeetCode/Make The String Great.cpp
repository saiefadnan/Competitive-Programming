#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);   


int main(){
    fastio
    string s;
    cin>>s;
    bool run=1;
    while(run){
        run=0;
        for(ll i=0;i<s.length()-1;++i){
            if(s[i]==s[i+1]+32){
                s.erase(i,2);
                --i;
                run=1;
                break;
            }
            if(s.length()<2)break;
        }
    }
    cout<<s;
    return 0;
}

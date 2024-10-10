#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    string s;
    cin>>s;
    ll n = s.length();
    for(ll i=n/2;i<n-1;++i){
        if(s.substr(0,i+1)==s.substr(n-i-1,i+1)){
            cout<<"YES\n";
            cout<<s.substr(0,i+1)<<"\n";
            return 0;
        }
    }
    cout<<"NO\n";
    return 0;
}

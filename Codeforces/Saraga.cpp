#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    string s1,s2;
    cin>>s1>>s2;
    ll len = INT_MAX;
    string res1="",res2="";
    ll l1 = s1.length();
    ll l2 = s2.length();
    map<char,ll>freq;
    for(ll i=1;i<l1;++i){
        if(!freq.count(s1[i]))freq[s1[i]]=i;
    }
    ll p=-1,q;
    for(ll i=0;i<l2-1;++i){
        if(freq.count(s2[i]) && len>l2-i+freq[s2[i]]){
            len = l2-i+freq[s2[i]];
            p=freq[s2[i]];
            q=i;
        }
    }
    if(p==-1)cout<<p;
    else {
        for(ll i=0;i+1<=p;++i) cout<<s1[i];
        for(ll i=q;i<l2;++i) cout<<s2[i];
    }
    return 0;
}

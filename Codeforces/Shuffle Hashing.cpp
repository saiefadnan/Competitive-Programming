#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        string s,h;
        map<char,ll>freq;
        cin>>s>>h;
        ll len = s.length();
        ll hlen = h.length();
        ll cnt =len;
        for(ll i=0;i<len;++i){
            freq[s[i]]++;
        }
        if(hlen<len){
            cout<<"NO\n";
            continue;
        }
        for(ll i=0;i<hlen;++i){
            map<char,ll>fr = freq;
            for(ll j=i;j<i+len;++j){
                if(fr.count(h[j]) && fr[h[j]]>0){
                    fr[h[j]]--;
                    cnt--;
                }
                else{
                    cnt=len;
                    break;
                }
            }
            if(!cnt){
                cout<<"YES\n";
                break;
            }
        }
        if(cnt){
            cout<<"NO\n";
        }
    }
    return 0;
}       

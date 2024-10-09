#include <bits/stdc++.h>
    #define ll long long 
    using namespace std;
     
    int main() {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        ll t;
        cin>>t;
        while(t--){
            ll n; 
            cin>>n;
            string in;
            set<char>unq;
            map<char,ll>freq;
            cin>>in;
            for(ll i=0;i<n;++i){
                freq[in[i]]++;
                unq.insert(in[i]);
            }
            while(!freq.empty()){
                for(auto it:unq){
                    if(freq.count(it)){
                        cout<<it;
                        freq[it]--;
                    }
                    if(freq.count(it) && freq[it]==0){
                        freq.erase(it);
                    }
                }
            }
            cout<<"\n";
        }
        return 0;
    }

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(){
    ll n;
    string s;
    cin>>n;
    cin>>s;
    ll temp = 0;
    ll sum = 0;
    vector<ll>emp;
    for(ll i=0;i<n;++i){
        if(s[i]=='.')temp++;
        else if(temp>0){
            emp.push_back(temp); 
            temp = 0;
        }
    }
    if(temp>0){
        emp.push_back(temp); 
        temp = 0;
    }
    for(ll i=0;i<emp.size();++i){
        if(emp[i]>2){
            cout<<"2\n";
            return;
        }
        else{
            sum+=emp[i];
        }
    }
    cout<<sum<<"\n";
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;
map<ll,bool>dp;
void dynamic(){
    for(ll i=0;i<125;++i){
        dp[i*8]=1;
        //cout<<i*8<<"\n";
    }
}

int main(){
    fastio
    dynamic();
    string num;
    cin>>num;
    if(num.length()==1){
        if(dp[num[0]-'0'])cout<<"YES\n"<<num;
        else cout<<"NO";
    }
    else if(num.length()==2){
        ll r=(num[0]-'0')*10+(num[1]-'0');
        if(dp[(num[0]-'0')])cout<<"YES\n"<<num[0];
        else if(dp[(num[1]-'0')])cout<<"YES\n"<<num[1];
        else if(dp[r])cout<<"YES\n"<<r;
        else cout<<"NO";
    }
    else{
        for(ll i=0;i<num.length();++i){
            ll r=(num[i]-'0');
            //cout<<r<<"\n";
            if(dp[r]){
                cout<<"YES\n"<<r;
                return 0;
            }
        }
        for(ll i=0;i<num.length()-1;++i){
            for(ll j=i+1;j<num.length();++j){
                ll r=(num[i]-'0')*10+(num[j]-'0');
                //cout<<r<<"\n";
                if(dp[r]){
                    cout<<"YES\n"<<r;
                    return 0;
                }
            }
        }
        for(ll i=0;i<num.length()-2;++i){
            for(ll j=i+1;j<num.length()-1;++j){
                for(ll k=j+1;k<num.length();++k){
                    ll r=(num[i]-'0')*100+(num[j]-'0')*10+(num[k]-'0');
                        if(dp[r]){
                        cout<<"YES\n"<<r;
                        return 0;
                    }
                }
            }
        }
        cout<<"NO";
    }
    return 0;
}
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#include<bits/stdc++.h>
using namespace std;

int main(){
    fastio  
    ll t;
    cin>>t;
    while(t--){
        ll n;
        bool flag=0;
        string s;
        cin>>n>>s;
        if(n%2!=0)cout<<"-1\n";
        else{
            ll c=0;
            for(ll i=0;i<n;++i)
                if(s[i]==')')c++;
            if(c!=n/2)cout<<"-1\n";
            else{
                ll color=1;
                int shift=-1;
                stack<ll>track1;
                vector<ll>print(n);
                for(ll i=0;i<n;++i){
                    if(shift==-1 && s[i]=='('){
                        track1.push(s[i]);
                        print[i]=color;
                        shift=1;
                    }
                    // else if(shift==1 && s[i]=='(' && track1.size()==0){
                    //     track1.push(s[i]);
                    //     print[i]=++color;
                    // }
                    else if(shift==1 && s[i]=='('){
                        track1.push(s[i]);
                        print[i]=color;
                    }
                    else if(shift==1 && s[i]==')' && track1.size()>0){
                        track1.pop();
                        print[i]=color;
                    }
                    else if(shift==1 && s[i]==')' && track1.size()==0){
                        track1.push(s[i]);
                        if(color==1){
                            print[i]=++color;
                            flag=1;
                        }
                        else print[i]=--color;
                        shift=0;
                    }
                    else if(shift==-1 && s[i]==')'){
                        track1.push(s[i]);
                        print[i]=color;
                        shift=0;
                    }
                    // else if(shift==0 && s[i]==')' && track1.size()==0){
                    //     track1.push(s[i]);
                    //     print[i]=++color;
                    // }
                    else if(shift==0 && s[i]=='(' && track1.size()>0){
                        track1.pop();
                        print[i]=color;
                    }
                    else if(shift==0 && s[i]==')'){
                        print[i]=color;
                        track1.push(s[i]);
                    }
                    else if(shift==0 && s[i]=='(' && track1.size()==0){
                        track1.push(s[i]);
                        if(color==1){
                            print[i]=++color;
                            flag=1;
                        }
                        else print[i]=--color;
                        shift=1;
                    }
                }
                if(!flag)cout<<1<<"\n";
                else cout<<2<<"\n";
                for(auto it:print)cout<<it<<" ";
                cout<<"\n";
            }
        }
    }
    return 0;
}


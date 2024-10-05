#include<bits/stdc++.h>
using namespace std;
#define ll long long
const long long week = 7;

int main(){
    ll t;
    ll a[week]={0};
    cin>>t;
    while(t--){
        ll count = 0,k,res=LONG_LONG_MAX;
        cin>>k;
        for(ll i=0;i<week;++i){
            cin>>a[i];
            if(a[i])count++;
        }
        for(ll i=0;i<week;++i){
            ll j=-1,q=0;
            ll temp[week]={0};
            while(j!=i){
                if(j==-1){
                    j=i;
                    temp[q]=a[j];
                }
                j=(j+1)%week;
                ++q;
                temp[q]=a[j];

            }
            // for(ll i=0;i<week;++i)cout<<temp[i]<<" ";
            // cout<<endl;
            ll rest = k - ceil(k/count)*count;
            ll restDays=0;
            ll deleteDays = 0;
            if(rest>0){
                for(ll p=0;p<week && rest>0;++p){
                    if(temp[p])rest--;
                    restDays++;
                }
            }
            else{
                for(ll p=week-1;p>=0;--p){
                    if(temp[p]) break;
                    deleteDays--;
                }
            }
            ll cmp = restDays+week*ceil(k/count)+deleteDays;
            res=min(res,cmp);
        }
        cout<<res<<endl;
    }
    return 0;
}

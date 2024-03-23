#include<iostream>
typedef long long int ll;
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,i,res=1;
        cin>>n;
        ll a[n];
        for(i=0;i<n;++i){
            cin>>a[i];
            res*=a[i];
        }
        cout<<2022*(res+n-1)<<endl;
    }
    return 0;
}

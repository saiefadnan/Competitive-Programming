#include<iostream>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,q,i,max=-1,indx=-1;
        cin>>n>>q;
        ll a[n],b[n];
        for(i=0;i<n;++i)cin>>a[i];
        for(i=0;i<n;++i)
        {
            cin>>b[i];
            if(a[i]+i<=q){
                if(max<b[i]){
                    max=b[i];
                    indx=i+1;
                }
            }
        }
        cout<<indx<<endl;
    }
    return 0;
}

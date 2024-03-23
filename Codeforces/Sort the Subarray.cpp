#include<iostream>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long int l[2],r[2],n,f=0,g=0,g1=0,i;
        cin>>n;
        long long int a[n],t[n];
        for(i=0;i<n;++i)cin>>t[i];
        for(i=0;i<n;++i)cin>>a[i];
        l[0]=1,l[1]=1,r[0]=1,r[1]=1;
        for(i=0;i<n-1;++i){
            if(f==0){
                if(a[i]<=a[i+1] && g==0){
                    l[0]=i+1;
                    r[0]=i+2;
                    g=1;
                }
                else if(a[i]<=a[i+1])r[0]=i+2;
                else if(a[i]>a[i+1] && g==1)f=1;
            }
            if(f==1){
                if(a[i]<=a[i+1] && g1==0){
                    l[1]=i+1;
                    r[1]=i+2;
                    g1=1;
                }
                else if(a[i]<=a[i+1])r[1]=i+2;
                else if(a[i]>a[i+1] && g1==1){
                    if(r[0]-l[0]>=r[1]-l[1])g1=0;
                    else{
                        f=0;
                        g=0;
                    }
                }
            }
        }
        if(r[0]-l[0]>=r[1]-l[1])cout<<l[0]<<" "<<r[0] <<endl;
        else cout<<l[1]<<" "<<r[1] <<endl;
    }
    return 0;
}

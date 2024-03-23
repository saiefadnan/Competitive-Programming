#include<iostream>

using namespace std;

int main(){
    long long int n,i,j,flag;
    cin>>n;
    long long int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        flag=0;
        for(j=2;j*j<=a[i];j++){
            if(j*j==a[i])flag++;
            else if(a[i]%j==0)flag+=2;
            if(flag>1)break;
        }
        if(flag==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
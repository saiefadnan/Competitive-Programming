#include<iostream>
#define ll long long int
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,k;
        cin>>x>>k;
        if(x<k || x%k!=0){
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<"2"<<endl;
            cout<<k+1<<" "<<x-k-1<<endl;
        }
    }
    return 0;
}

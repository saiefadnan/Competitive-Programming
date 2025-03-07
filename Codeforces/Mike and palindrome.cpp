#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    string name;
    cin>>name;
    ll len = name.length();
    bool ignore = true;
    for(ll i=0;i<len/2;++i){
        //cout<<name[i]<<"-------"<<name[len-1-i]<<"\n";
        if(name[i]!=name[len-1-i] && ignore)ignore = false;
        else if(name[i]!=name[len-1-i] && !ignore){
            cout<<"NO";
            return 0;
        }
    }
    if(!ignore || (len&1))cout<<"YES";
    else cout<<"NO";
    return 0;
}

#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    char vowel[] = {'a','e','i','o','u','y'};
    string in;
    string final_str="";
    cin>>in;
    ll len = in.length();
    for(ll i=0;i<len;++i){
        bool print=true;
        for(ll j=0;j<6;++j){
            char Uvowel = (vowel[j]-32);
            if(in[i]==vowel[j] || in[i]==Uvowel){
                //do nothing
                print=false;
                break;
            }
        }
        if(print){
            if(in[i]>=65 && in[i]<=90)final_str+="."+string(1,(char)(in[i]+32));
            else final_str+="."+string(1,in[i]);
        }
    }
    cout<<final_str;
    return 0;
}

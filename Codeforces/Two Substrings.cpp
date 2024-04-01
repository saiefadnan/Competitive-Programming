#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
#include<bits/stdc++.h>
using namespace std;


int main(){
    fastio
    string word;
    cin>>word;
    bool a1=0,a2=0;
    for(ll i=0;i<word.length()-1;++i){
        if(word[i]=='A' && word[i+1]=='B' && !a1){
            a1=1;
            ++i;
        }
        else if(word[i]=='B' && word[i+1]=='A' && !a2 && a1){
            a2=1;
            ++i;
        }
        if(a1 && a2){
            cout<<"YES";
            return 0;
        }
    }
    a1=0;a2=0;
    for(ll i=0;i<word.length()-1;++i){
        if(word[i]=='B' && word[i+1]=='A' && !a2){
            a2=1;
            ++i;
        }
        else if(word[i]=='A' && word[i+1]=='B' && !a1 && a2){
            a1=1;
            ++i;
        }
        if(a1 && a2){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
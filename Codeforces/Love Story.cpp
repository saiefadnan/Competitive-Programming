#include<iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        string s="codeforces";
        string q;
        cin>>q;
        int coun=0,i;
        for(i=0;i<q.length();++i){
            if(q[i]!=s[i])coun++;
        }
        cout<<coun<<endl;
    }
    return 0;
}

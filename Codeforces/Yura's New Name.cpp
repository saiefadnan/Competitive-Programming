#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int coun=0,l=1,i;
        string s;
        cin>>s;
        for(i=0;s[i]!='\0';i+=l){
            if(s[i]=='^' && s[i+1]=='^')l=2;
            else if(i>0 && s[i-1]=='^' && s[i]=='^')l=1;
            else if(s[i]=='^' && s[i+1]=='_' && s[i+2]=='^')l=3;
            else if(i>0 && s[i-1]=='^' && s[i]=='_' && s[i+1]=='^')l=2;
            else if(i==0 && s[i]=='_'){
                s.insert(i,"^");
                if(s[i+2]!='^'){
                    s.insert(i+2,"^");
                    coun+=2;
                }
                else coun++;
                l=3;
            }
            else if(i>0 && s[i-1]=='^' && s[i]=='_' && (s[i+1]=='_' || s[i+1]=='\0')){
                s.insert(i+1,"^");
                coun++;
                l=2;
            }
            else if(s[i]=='^' && s[i+1]=='_'){
                s.insert(i+2,"^");
                coun++;
                l=3;
            }
            else if(s[i]=='^'){
                s.insert(i+1,"^");
                coun++;
                l=2;
            }
        }
        cout<<coun<<endl;
    }
    return 0;
}

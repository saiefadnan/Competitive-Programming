#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    // process-01
    // string convert(string s, int numRows) {
    //     int n=s.length();
    //     int r=numRows;
    //     int c=n/2+n%2;
    //     if(r==1 || c==1)return s;
    //     char print[r][c];
    //     for(int i=0;i<r;++i){
    //         for(int j=0;j<c;++j)print[i][j]=' ';
    //     }
    //     string word;
    //     int l=0;
    //     for(int i=0;i<c;i+=(r-1)){
    //         for(int j=0;j<r && l<n;++j)print[j][i]=s[l++];
    //         for(int p=r-2,q=i+1;p>=1 && q<=i+r-2 && l<n;--p,++q)print[p][q]=s[l++];
    //     }
    //     for(int i=0;i<r;++i){
    //         for(int j=0;j<c;++j){
    //             if(print[i][j]!=' ')word.push_back(print[i][j]);
    //         }
    //     }
    //     return word;
    // }


    //process-02
    string convert(string s, int numRows) {
        int n=s.length();
        if(numRows<2 || n==numRows) return s;
        vector<string>mem(numRows,"");
        int j=0,dir=1;
        for(int i=0;i<s.length();++i){
            if(dir==1) mem[j++]+=s[i];
            else mem[j--]+=s[i];
            if(j==numRows){
                dir=-1;
                j-=2;
            }
            if(j==-1){
                dir=1;
                j+=2;
            }
        }
        string word;
        for(auto it:mem)word+=it;
        return word;
    }
};

int main(){
    fastio
    string word;
    ll n;
    cin>>word>>n;
    cout<<Solution().convert(word,n)<<"\n";
    return 0;
}
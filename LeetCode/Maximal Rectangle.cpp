#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll int
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    int maxArea(ll histo[],ll sz){
        stack<ll>st,st1;
        int left_small[sz],right_small[sz];
        for(ll i=0;i<sz;++i){
            if(st.empty() || histo[st.top()]<histo[i]){
                st.push(i);
                left_small[i]=i;
            }
            else{
                while(!st.empty() && histo[st.top()]>=histo[i])st.pop();
                if(!st.empty())left_small[i]=st.top()+1;
                else left_small[i]=0;
                st.push(i);
            }
        }
        
        for(ll i=sz-1;i>=0;--i){
            if(st1.empty() || histo[st1.top()]<histo[i]){
                st1.push(i);
                right_small[i]=i;
            }
            else{
                while(!st1.empty() && histo[st1.top()]>=histo[i])st1.pop();
                if(!st1.empty())right_small[i]=st1.top()-1;
                else right_small[i]=sz-1;
                st1.push(i);
            }
        }
        ll ans=-1;
        for(ll i=0;i<sz;++i){
            ans=max(ans,(right_small[i]-left_small[i]+1)*histo[i]);
        }

        return ans;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        ll r=matrix.size();
        ll c=matrix[0].size();
        ll histogram[r][c];
        for(ll i=0;i<r;++i){
            for(ll j=0;j<c;++j){
                if(i==0)histogram[i][j]=matrix[i][j]-'0';
                else if(matrix[i][j]!='0') histogram[i][j]=1+histogram[i-1][j];
                else histogram[i][j]=0;
            }
        }
        ll ans=0;
        for(ll i=0;i<r;++i){
            ans=max(ans,maxArea(histogram[i],c));
        }
        return ans;
    }
};

int main(){
    fastio
    vector<vector<char>>t={{'1','0','1','0','0'},{'1','0','1','1','1'},{'1','1','1','1','1'},{'1','0','0','1','0'}};
    //vector<vector<char>>t={{'0'}};
    //vector<vector<char>>t={{'1'}};
    cout<<Solution().maximalRectangle(t);
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numTeams(vector<int>& rating) {
        int n=rating.size();
        int res=0;
        for(int i=1;i<n-1;++i){
            int ll=0,mr=0;
            for(int j=0;j<i;++j){
                if(rating[j]<rating[i])ll++;
            }
            for(int j=n-1;j>i;--j){
                if(rating[j]>rating[i])mr++;
            }
            res+=(ll*mr);
        }
        for(int i=1;i<n-1;++i){
            int ml=0,lr=0;
            for(int j=0;j<i;++j){
                if(rating[j]>rating[i])ml++;
            }
            for(int j=n-1;j>i;--j){
                if(rating[j]<rating[i])lr++;
            }
            res+=(ml*lr);
        }
        return res;
    }
};

int main(){
    Solution s;
    vector<int>in={1,3,4,5,6};
    cout<<s.numTeams(in);
    return 0;
}

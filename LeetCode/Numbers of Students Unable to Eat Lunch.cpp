#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define ll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);  

class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches){
        int n=students.size();
        int stu[2]={0};
        int snd[2]={0};
        for(int i=0;i<n;++i){
            stu[students[i]]++;
            snd[sandwiches[i]]++;
        }
        int j=0,k=0;
        while(k<n){
            if(j<students.size() && students[j]==sandwiches[k]){
                stu[students[j]]--;
                snd[sandwiches[k]]--;
                ++k;
                if(!students.empty())students.erase(students.begin()+j);
                if(students.empty())return 0;
            }
            else{
                if(j<students.size())j=(j+1)%students.size();
                else j=0;
            }
            if(k<n && stu[sandwiches[k]]==0)return students.size();
        }
        return 0;
    }
};

int main(){
    fastio
    // vector<int>stu={1,1,1,0,0,1};
    // vector<int>sand={1,0,0,0,1,1};
    // vector<int>stu={1,1,0,0};
    // vector<int>sand={0,1,0,1};
    // vector<int>stu={0,0,1,1,0,0,0,0,1,0,0,1,1,0,1,1};
    // vector<int>sand={1,0,0,0,0,0,0,1,0,0,1,0,1,1,1,0};
    vector<int>stu={1,0,1,0};
    vector<int>sand={0,1,0,1};
    cout<<Solution().countStudents(stu,sand);
}
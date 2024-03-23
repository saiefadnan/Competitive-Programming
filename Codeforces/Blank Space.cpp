#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,i,freq[50]={0},f=0,c=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1 && f==0)continue;
            else if(a[i]==0){
                freq[c]++;
                f=1;
            }
            else if(a[i]==1){
                c++;
                f=1;
            }
        }
        sort(freq,freq+50);
        cout<<freq[49]<<endl;
    }
    return 0;
}


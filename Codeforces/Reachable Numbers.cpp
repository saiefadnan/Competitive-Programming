#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,cnt=0;
    bool done = 0;
    cin>>n;
    map<ll,ll>freq;
    while(!freq.count(n)){
        freq[n]=1;
        cnt++;
        //cout<<n<<" "<<cnt<<"\n";
        ll ld = n%10;
        if(ld){
            for(ll i=1;i<=9-ld;++i){
                ++n;
                if(freq.count(n)){
                    done=1;
                    break;
                }
                freq[n]=1;
                cnt++;
            }
            if(done)break;
        }
        n++;
        while(!(n%10)){
            n=n/10;
        }
    }
    cout<<cnt;
    return 0;
}

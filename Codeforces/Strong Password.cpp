    #define ll long long
    #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);    
    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        fastio 
        ll t;
        cin>>t;
        while(t--){
            string s,l,r;
            ll n;
            bool ans=0;
            map<char,vector<ll>>track;
            cin>>s;
            for(ll i=0;i<s.length();++i)
                track[s[i]].push_back(i+1);
            cin>>n;
            cin>>l>>r;
            ll mn=-1;
            for(ll i=0;i<n;++i){
                ll mn2=-1;
                for(char j=l[i];j<=r[i];++j){
                    ll mn1=LONG_LONG_MAX;
                    if(track[j].empty()){
                        ans=1;
                        break;
                    }
                    else if(i==0){
                        mn=max(mn,track[j][i]);
                    }
                    else{
                        for(auto it=track[j].rbegin();it!=track[j].rend();++it){
                            if(*it<mn)break;
                            if(mn<*it && *it<mn1)mn1=*it;
                        }
                        if(mn1==LONG_LONG_MAX){
                            ans=1;
                            break;
                        }
                        mn2=max(mn1,mn2);
                    }
                }
                if(i>0)mn=mn2;
                if(ans)break;
            }
            if(!ans)cout<<"NO\n";
            else cout<<"YES\n";
        }
        return 0;
    }

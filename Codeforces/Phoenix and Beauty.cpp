    #define ll int
    #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
        fastio  
        ll t;
        cin>>t;
        while(t--){
            ll n,k,s1=0;
            bool flag=1;
            cin>>n>>k;
            vector<ll>arr;
            map<ll,ll>frq;
            for(ll i=0;i<n;++i){
                ll temp;
                cin>>temp;
                arr.push_back(temp);
            }
            for(ll i=0;i<n;++i){
                    if(frq[arr[i]]==0)s1+=arr[i];
                    frq[arr[i]]++;
                    if(frq.size()>k){
                        cout<<"-1\n";
                        flag=0;
                        break;
                    }
            }
            if(flag){
                ll l1=k/frq.size();
                ll l2=k%frq.size();
                while(l1--){
                    for(auto it=frq.begin();it!=frq.end();++it)
                        arr.insert(arr.begin(),it->first);
                }
                for(auto it=frq.begin();it!=frq.end() && l2!=0;++it){ 
                    arr.insert(arr.begin(),it->first);
                    l2--;
                }
                for(ll i=k,j=0;i<arr.size();++i,++j){
                    if(arr[i]!=arr[j])arr.insert(arr.begin()+i,arr[j]);
                }
                cout<<arr.size()<<"\n";
                for(auto it:arr)cout<<it<<" ";
                cout<<"\n";
            }
        }
        return 0;
    }

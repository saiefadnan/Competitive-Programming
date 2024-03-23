#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,t100=0,t200=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        if(temp==100)t100++;
        else if(temp==200)t200++;
    }
    if(n==1)cout<<"NO";
    else if(t100==0&&t200%2!=0)cout<<"NO";
    else if(t100%2==0&&t200%2!=0)cout<<"YES";
    else if(t100%2!=0&&t200%2==0)cout<<"NO";
    else if(t100%2!=0&&t200%2!=0)cout<<"NO";
    else if(t100%2==0&&t200%2==0)cout<<"YES";
    return 0;
}

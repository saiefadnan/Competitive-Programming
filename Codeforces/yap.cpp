#include<iostream>
long long int freq[10000];
using namespace std;
int main()
{
    long long int n,i,f=0,mx=-9999,mn=99999;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        freq[a[i]]++;
        if(mx<a[i])mx=a[i];
        if(mn>a[i])mn=a[i];
    }
    for(i=mn;i<=mx;i++)
    {
        if(freq[i]==0)continue;
        if(freq[i]>n-freq[i]+1)
        {
            printf("NO");
            f=1;
            break;
        }
    }
    if(f==0)printf("YES");
    return 0;
}
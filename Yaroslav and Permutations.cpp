#include<iostream>
long long int freq[10000];
using namespace std;
int main()
{
    long long int n,i,d=0,f=0,mx=-9999,mn=9999;
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
        if(freq[i]==1)d++;
        if(freq[i]>1)
        {
            f-=freq[i];
        }
    }
    d=d+f;
    if(d>=-1)printf("YES");
    else printf("NO");
    return 0;
}

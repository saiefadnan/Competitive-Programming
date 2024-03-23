#include<stdio.h>

int main()
{
    long long int n,m,i,t=0,d1;
    scanf("%lld %lld",&n,&m);
    long long int a[m+1];
    a[0]=1;
    for(i=1;i<m+1;i++)
    {
        scanf("%lld",&a[i]);
        if(a[i]>=a[i-1])d1=a[i]-a[i-1];
        else d1=n+a[i]-a[i-1];
        t+=d1;
    }
    printf("%lld",t);
    return 0;
}

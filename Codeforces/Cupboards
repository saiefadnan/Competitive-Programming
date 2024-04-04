#include<stdio.h>

int main()
{
    long long int n,l,r,i,t,t1,count1=0,count2=0;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld",&l,&r);
        if(l==0)
        {
            count1++;
        }
        if(r==0)
        {
            count2++;
        }
    }
    if(count1<n-count1)
    {
        t=count1;
    }
    else
    {
        t=n-count1;
    }
     if(count2<n-count2)
    {
        t1=count2;
    }
    else
    {
        t1=n-count2;
    }
    printf("%lld",t+t1);
    return 0;
}

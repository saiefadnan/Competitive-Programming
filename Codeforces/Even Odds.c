#include<stdio.h>
 long long int n,i,t,a;
int main()
{
    scanf("%lld%lld",&n,&t);
    if(n%2!=0)
    {
        if(t-1>=0&&t-1<=(n-1)/2)a=2*t-1;
        else a=2*t-n-1;
        printf("%lld",a);
    }
    else
    {
        if(t-1>=0&&t-1<=(n-2)/2)a=2*t-1;
        else a=2*t-n;
        printf("%lld",a);
    }
    return 0;
}

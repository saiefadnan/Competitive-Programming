#include<stdio.h>

int main()
{
    int n,a,b,count=1;
    scanf("%d %d %d",&n,&a,&b);
    if(a+b>=n)
    {
        b=n-a-1;
    }
    else if(a+b<n)
    {
        a=n-b-1;
    }
    while(a!=n&&b!=0)
    {
        b--;
        a++;
        count++;
    }
    printf("%d",count);
    return 0;
}

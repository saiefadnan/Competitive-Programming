#include<stdio.h>

int main()
{
    long long int n,min,count=0,i,b;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        if(i==0)
        {
            min=a[i];
            b=i+1;
        }
        else if(i>0)
        {
            if(min>a[i])
            {
                count=0;
                min=a[i];
                b=i+1;
            }
            else if(min==a[i])
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        printf("%lld",b);
    }
    else if(count>0)
    {
        printf("Still Rozdil");
    }
    return 0;
}

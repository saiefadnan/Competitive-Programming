#include<stdio.h>

int main()
{
    int n,m,i,b,count=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    while(count!=n)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]>0&&a[i]<m)
            {
                a[i]=0;
                b=i;
                count++;
            }
            else if(m<=a[i])
            {
                a[i]-=m;
                b=i;
                if(a[i]==0)
                {
                    count++;
                }
            }
        }
    }
    printf("%d",b+1);
    return 0;
}

#include<stdio.h>

int main()
{
    int n,i,a[4],count,j,m,b;
    scanf("%d",&n);
    for(m=1;;m++)
    {
        n=n+1;
        b=n;
        i=0;
        count=0;
        while(b!=0)
        {
            a[i]=b%10;
            i++;
            b=b/10;
        }
        for(i=0;i<4;i++)
        {
            for(j=1+i;j<4;j++)
            {
                if(a[j]!=a[i])
                {
                    count++;
                }
            }
        }
        if(count==6)
        {
            break;
        }
    }
    printf("%d",n);
    return 0;
}

#include<stdio.h>

int main()
{
    int n,m,i,j,max=-99999,d,count;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            d=b[i]/a[j];
            if(b[i]%a[j]==0&&d>max)
            {
                max=d;
                count=1;
            }
            else if(b[i]%a[j]==0&&max==d)
            {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}

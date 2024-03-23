#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,temp1,temp2,min=0,max=0,t;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(i==0)
        {
            temp1=a[0];
            temp2=temp1;
        }
        else
        {
            if(temp1>=a[i])
            {
                min=i;
                temp1=a[i];
            }
            else if(temp2<a[i])
            {
                max=i;
                temp2=a[i];
            }
        }
    }
    if(max>min)
    {
        min++;
    }
    t=n-min+max-1;
    printf("%d",t);
    return 0;
}

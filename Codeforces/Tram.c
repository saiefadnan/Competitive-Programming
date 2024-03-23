#include<stdio.h>
#include<stdio.h>
int main()
{
    int n,i,sum=0,temp=0,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum+=b-a;
        if(sum>temp)
        {
            temp=sum;
        }
    }
    printf("%d",temp);
    return 0;
}

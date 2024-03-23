#include<stdio.h>
#include<math.h>
int main()
{
    float d1,d2,d,sum=0,res;
    int n,k,i;
    scanf("%d %d",&n,&k);
    float x[n],y[n];
    for(i=0;i<n;i++)
    {
        scanf("%f %f",&x[i],&y[i]);
        if(i>0)
        {
            d1=x[i]-x[i-1];
            d2=y[i]-y[i-1];
            d=sqrt(d1*d1+d2*d2);
            sum+=d;
        }
    }
    res=sum*k/50;
    printf("%.9f",res);
    return 0;
}

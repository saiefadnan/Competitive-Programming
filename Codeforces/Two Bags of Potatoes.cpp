#include<iostream>
using namespace std;
int main()
{
    long long int i,x,y,n,k,f=0;
    scanf("%lld %lld %lld",&y,&k,&n);
    if(y>=n)printf("-1");
    else 
    {
        for(i=1;i<=n/k;++i)
        {
            x=i*k-y;
            if(x<=0)continue;
            else 
            {
                printf("%lld ",x);
                f=1;
            }
        }
        if(f==0)printf("-1");
    }
    return 0;
}

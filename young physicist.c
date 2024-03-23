#include<stdio.h>
int main()
{
    int n,xi=0,yi=0,zi=0,i,m,p,o;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&m,&p,&o);
        xi=xi+m;
        yi=yi+p;
        zi=zi+o;
    }
if(xi==0&&yi==0&&zi==0)
{
    printf("YES");
}
else
{
    printf("NO");
}
return 0;
}

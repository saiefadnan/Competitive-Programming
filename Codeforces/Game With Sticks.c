#include<stdio.h>

int main()
{
    int n,m,d,c=0;
    scanf("%d %d",&n,&m);
    d=n*m;
    if(m>=n)c+=n;
    else c+=m;
    if(c%2!=0)printf("Akshat");
    else printf("Malvika");
    return 0;
}

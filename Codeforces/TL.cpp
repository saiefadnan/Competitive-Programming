#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,mn=99999;
    scanf("%d %d",&n,&m);
    int a[n],b[m];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
        if(mn>b[i])mn=b[i];
    }
    sort(a,a+n);
    if(n==1 && 2*a[0]<mn)printf("%d",2*a[0]);
    else if(a[n-1]<mn && 2*a[0]<=a[n-1])printf("%d",a[n-1]);
    else printf("-1");
    return 0;
}
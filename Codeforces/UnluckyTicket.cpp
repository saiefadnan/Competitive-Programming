#include<iostream>
#include<math.h>
using namespace std;
int p[2];
int main()
{
    int n,i,j,k,m,g=0;
    scanf("%d",&n);
    char s[300],c;
    getchar();
    gets(s);
    for(i=0,k=n;i<n-1 && k<2*n-1;i++,k++)
    {
        for(j=i+1,m=k+1;j<n && m<2*n;j++,m++)
        {
            if(s[i]>s[j])
            {
                c=s[i];
                s[i]=s[j];
                s[j]=c;
            }
            if(s[k]>s[m])
            {
                c=s[k];
                s[k]=s[m];
                s[m]=c;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(s[i]>s[n+i])p[1]=-1;
        else if(s[i]<s[n+i])p[2]=1;
        if(p[1]-p[2]==-2||s[i]==s[n+i])
        {
            printf("NO");
            g=1;
            break;
        }
    }
    if(abs(p[1]-p[2])==1&&g==0)printf("YES");
    return 0;
}
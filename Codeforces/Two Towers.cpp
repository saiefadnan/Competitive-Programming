#include<iostream>

using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,flag1=0,flag2=0;
        scanf("%d%d",&n,&m);
        fgetc(stdin);
        char s1[n+2],s2[m+2];
        fgets(s1,sizeof(s1),stdin);
        fgets(s2,sizeof(s2),stdin);
        if(n>=m)
        {
            for(i=0;i<n;i++)
            {
                if(s1[i]=='R'&&s1[i+1]=='R')
                {
                    flag1++;
                }
                else if(s1[i]=='B'&&s1[i+1]=='B')
                {
                    flag1++;
                }
                if(s2[i]=='R'&&s2[i+1]=='R')
                {
                    flag2++;
                }
                else if(s2[i]=='B'&&s2[i+1]=='B')
                {
                    flag2++;
                }
            }
        }
        if(n<m)
        {
            for(i=0;i<m;i++)
            {
                if(s1[i]=='R'&&s1[i+1]=='R')
                {
                    flag1++;
                }
                else if(s1[i]=='B'&&s1[i+1]=='B')
                {
                    flag1++;
                }
                if(s2[i]=='R'&&s2[i+1]=='R')
                {
                    flag2++;
                }
                else if(s2[i]=='B'&&s2[i+1]=='B')
                {
                    flag2++;
                }
            }
        }
        if(flag1==1&&flag2==0&&s1[n-1]!=s2[m-1])printf("YES\n");
        else if(flag1==0&&flag2==1&&s1[n-1]!=s2[m-1])printf("YES\n");
        else if(flag1==0&&flag2==0)printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

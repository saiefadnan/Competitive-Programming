#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s[n][100000];
    int len[n];
    for(i=0;i<n;i++)
    {
        scanf("%s",&s[i]);
        len[i]=strlen(s[i]);
    }
    for(i=0;i<n;i++)
    {
        if(len[i]>10)
        {
            printf("%c%d%c\n",s[i][0],len[i]-2,s[i][len[i]-1]);
        }
        else if(len[i]<=10)
        {
            printf("%s\n",s[i]);
        }
    }
    return 0;
}

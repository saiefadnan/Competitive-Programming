#include<stdio.h>
#include<string.h>
int main()
{
    char s[105]={0};
    int i,flag=0;
    fgets(s,105,stdin);
    int len=strlen(s);
    for(i=0;i<len-1;i++)
    {
        if(s[i]=='H')
        {
            flag=1;
            break;
        }
        if(s[i]=='Q')
        {
            flag=1;
            break;
        }
        if(s[i]=='9')
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

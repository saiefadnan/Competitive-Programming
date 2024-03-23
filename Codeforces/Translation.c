#include<stdio.h>
#include<string.h>
int main()
{
    char s[200],t[200];
    scanf("%s %s",s,t);
    strrev(s);
    if(strcmp(s,t)==0)
    {
        printf("YES");
    }
    else printf("NO");
    return 0;
}


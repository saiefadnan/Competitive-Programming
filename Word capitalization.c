#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int x=s[0];
    if(x>=97&&x<=122)
    {
        x-=32;
        s[0]=x;
    }
    printf("%s",s);
    return 0;
}

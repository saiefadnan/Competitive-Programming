#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    int i;
    scanf("%s%s",&a,&b);
    int len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]==b[i])
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    return 0;
}

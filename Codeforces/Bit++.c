#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int x=0,n;
    scanf("%d",&n);
    fgetc(stdin);
    for(int j=0;j<n;j++)
    {
        fgets(s,100,stdin);
        int len=strlen(s);
        for(int i=0;i<len;i++)
        {
            if(s[i]=='+'&&s[i+1]=='+')
            {
                x++;
                break;
            }
            if(s[i]=='-'&&s[i+1]=='-')
            {
                x--;
                break;
            }
        }
    }
    printf("%d",x);
    return 0;
}

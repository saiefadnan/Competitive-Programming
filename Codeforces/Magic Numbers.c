#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int flag=0,j=1,i;
    gets(s);
        for(i=0;s[i]!='\0';i+=j)
        {
            if(s[i]=='1'&&(s[i+1]=='1'||s[i+1]=='\0'))
            {
                flag=1;
                j=1;
            }
            else if(s[i]=='1'&&s[i+1]=='4'&&(s[i+2]!='4'||s[i+2]=='\0'))
            {
                flag=1;
                j=2;
            }
            else if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4')
            {
                flag=1;
                j=3;
            }
            else if (s[i]!='1')flag=0;
            if(flag==0)
            {
                printf("NO");
                break;
            }
        }
    if(flag==1)
    {
        printf("YES");
    }
    return 0;
}

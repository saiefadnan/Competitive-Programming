#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,x,count1=0,count2=0;
    scanf("%s",&s);
    int y=strlen(s);
    for(i=0;i<y;i++)
    {
        x= s[i];
        if(x>=65&&x<=90)
        {
            count1++;
        }
        else if(x>=97&&x<=122)
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        for(i=0;i<100;i++)
        {
            x=s[i];
            if(x>=97&&x<=122)
            {
                x-=32;
                s[i]=x;
            }
        }
    }
    if(count1<count2||count1==count2)
    {
        for(i=0;i<100;i++)
        {
            x=s[i];
            if(x>=65&&x<=90)
            {
                x+=32;
                s[i]=x;
            }
        }
    }
    printf("%s",s);
    return 0;
}

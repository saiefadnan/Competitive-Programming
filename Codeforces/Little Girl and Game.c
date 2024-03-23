#include<stdio.h>
#include<string.h>
int freq[1010];
int main()
{
    char s[1010];
    int i,len,count=0,c=0,t,max=-9999,min=999999;
    scanf("%s",s);
    t=strlen(s);
    for(i=0;i<t;i++)
    {
        len=s[i];
        freq[len]++;
        if(max<len)max=len;
        if(min>len)min=len;
    }
    for(i=min;i<=max;i++)
    {
        if(freq[i]%2!=0)
        {
            count++;
        }
    }
    if(count>=1)c=count-1;
    if(c%2==0)printf("First");
    else printf("Second");
    return 0;
}

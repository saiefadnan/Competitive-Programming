#include<stdio.h>
#include<string.h>
int freq[1000];
int main()
{
    char u[1000];
    scanf("%s",u);
    int len=strlen(u);
    int a[len],count=0,i;
    for(i=0;i<len;i++)
    {
        a[i]=u[i];
        freq[a[i]]++;
        if(freq[a[i]]==1)
        {
            count++;
        }
    }
    if(count%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}

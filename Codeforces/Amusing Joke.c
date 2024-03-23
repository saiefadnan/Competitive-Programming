#include<stdio.h>
#include<string.h>
int freq1[91],freq2[91];
int main()
{
    int i,len1,len2,count=0,flag=0;
    char s1[105],s2[105],s3[105];
    scanf("%s",&s1);
    scanf("%s",&s2);
    scanf("%s",&s3);
    strcat(s1,s2);
    len1=strlen(s1);
    len2=strlen(s3);
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            int c1=s1[i];
            freq1[c1]++;
            int c2=s3[i];
            freq2[c2]++;
        }
        for(i=65;i<=90;i++)
        {
            if(freq1[i]!=freq2[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    else
    {
        printf("NO");
    }
    return 0;
}

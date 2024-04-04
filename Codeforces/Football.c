#include<stdio.h>
#include<string.h>
int freq[10000];
int main()
{
    char s[110],s1[110];
    int n,i,j,max=-999999,flag,sum;
    scanf("%d",&n);
    fgetc(stdin);
    for(i=0;i<n;i++)
    {
        fgets(s,110,stdin);
        sum=0;
        for(j=0;s[j]!='\0';j++)
        {
            int c=s[j];
            sum+=c;
        }
        freq[sum]++;
        if(freq[sum]>max)
        {
            s1[110]='\0';
            strcpy(s1,s);
            max=freq[sum];
        }
    }
    printf("%s",s1);
    return 0;
}

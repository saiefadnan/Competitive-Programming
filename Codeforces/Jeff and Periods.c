#include<stdio.h>
long long int freq[200000];
long long int pos[200000];
long long int pos1[200000];
int main()
{
    long long int n,i,j=0,max=-99999,min=200000,p;
    scanf("%lld",&n);
    long long int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        freq[a[i]]++;
        if(max<a[i])max=a[i];
        if(min>a[i])min=a[i];
        if(freq[a[i]]==1)
        {
            j++;
            pos[a[i]]=i;
        }
        else if(freq[a[i]]==2)
        {
            pos1[a[i]]=i;
            pos[a[i]]=i-pos[a[i]];
        }
        else if(freq[a[i]]>2&&i-pos1[a[i]]==pos[a[i]])
        {
            pos1[a[i]]=i;
        }
        else if(freq[a[i]]>2&&i-p!=pos[a[i]])
        {
            freq[a[i]]=-9999999;
            j--;
        }
    }
    printf("%lld\n",j);
    for(i=min;i<=max;i++)
    {
        if(freq[i]>1)printf("%lld %lld\n",i,pos[i]);
        else if(freq[i]==1)printf("%lld 0\n",i);
    }
    return 0;
}

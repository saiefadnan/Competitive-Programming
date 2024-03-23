#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin>>t;
    fgetc(stdin);
    while(t--)
    {
        int n,f=0,coun,i,j;
        cin>>n;
        char s[1000];
        char s1[]="FBFFBFFBFBFFBFFB";
        getchar();
        fgets(s,sizeof(s),stdin);
        for(i=0;i<17;i++)
        {
            coun=0;
            for(j=0;j<n;j++)
            {
                if(s[j]=='B' && s[j+1]=='B')
                {
                    f=1;
                    break;
                }
                else if(s[j]=='F' && s[j+1]=='F' && s[j+2]=='F')
                {
                    f=1;
                    break;
                }
                if(s1[i+j]==s[j])coun++;
                else if(s1[i+j]!=s[j])break;
            }
            if(f==1)break;
            if(coun==n)break;
        }
        if(f==1)cout<<"NO\n";
        else if(coun==n && f==0)cout<<"YES\n";
        else  cout<<"NO\n";
    }
    return 0;
}

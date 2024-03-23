#include<stdio.h>

int main()
{
    char A[200];
    scanf("%s",&A);
    for(int i=0;;i++)
    {
        if(A[i]=='-'&&A[i+1]=='.')
        {
            printf("1");
            i++;
        }
        else if(A[i]=='-'&&A[i+1]=='-')
        {
            printf("2");
            i++;
        }
        else if(A[i]=='.')
        {
            printf("0");
        }
        else if(A[i]!='.'||A[i]!='-')
        {
            break;
        }
    }
    return 0;
}

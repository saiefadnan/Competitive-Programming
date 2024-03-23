#include<iostream>
#include<string>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        int l;
        string c;
        getline(cin,c);
        if(c[0]<c[1])l=25*c[0]+c[1]-2522;
        else l=25*c[0]+c[1]-2521;
        cout<<l<<endl;
    }
    return 0;
}
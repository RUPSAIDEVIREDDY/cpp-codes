#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int n=10;
    cin>>a>>b;
    if(a>b)
    {
        c=a+b;
        cout<<c<<endl;
        if(c>n)
        {
            c=c+n;
            cout<<c<<endl;
        }
        else
        {
            c=n-c;
            cout<<c<<endl;
        }
    }
    else if(a<b)
    {
        c=b-a;
        cout<<c<<endl;
        if(c<n)
        {
            c=c+n;
            cout<<c<<endl;
        }
    }
    return 0;
}
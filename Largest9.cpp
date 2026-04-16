#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter abc values:";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is Bigger";
    }
    else if(b>c)
    {
        cout<<b<<" is Bigger";
    }
    else
    {
        cout<<c<<" is Bigger";
    }
    return 0;
}
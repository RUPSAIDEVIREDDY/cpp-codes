#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b values:";
    if(b!=0)
    cin>>a>>b;
    int sum=0;
    sum=a+b;
    int sub=0;
    sub=a-b;
    int mul=0;
    mul=a*b;
    int div=0;
    div=a/b;
    int mod=0;
    mod=a%b;
    cout<<sum<<"\n"<<sub<<"\n"<<mul<<"\n"<<div<<"\n"<<mod;
    return 0;
}
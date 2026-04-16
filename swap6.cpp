#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter a & b values:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Swapped values are:"<<"a is:"<<a<<"b is:"<<b<<endl;
    return 0;
}
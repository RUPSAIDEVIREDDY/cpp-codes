#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter x value:";
    cin>>x;
    y=++x;
    cout<<y<<"\n";
    cout<<"Addition:"<<x+y<<endl;
    cout<<"subtraction:"<<x-y<<endl;
    cout<<"Multiplication:"<<x*y<<endl;
    cout<<"division:"<<x/y<<endl;
    cout<<"modulus:"<<x%y<<endl;

    return 0;

}
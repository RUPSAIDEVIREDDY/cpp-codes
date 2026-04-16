#include<iostream>
using namespace std;
int main()
{
    int a=5,b=3;
    if(a>5&&b<10)
    {
        cout<<"a+b"<<(a+b)<<endl;
    }
    else if(a<=5||b>=10)
    {
        cout<<"a-b:"<<(a-b)<<endl;
    }
    else
    {
        cout<<"!a:"<<!a<<endl;
    }
    return 0;
}
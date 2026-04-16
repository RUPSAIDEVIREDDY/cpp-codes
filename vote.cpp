#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;
    if(age>=18)
    {
        cout<<"Your eligible for vote";
    }
    else
    {
        cout<<"Your not eligible for vote";
    }
    return 0;
}
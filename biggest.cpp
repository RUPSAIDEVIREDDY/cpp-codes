#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter number1:";
    cin>>num1;
    cout<<"Enter number2:";
    cin>>num2;
    if(num1>num2)
    {
        cout<<"number 1 is bigger:"<<num1;
    }
    else
    {
        cout<<"number 2 is bigger:"<<num2;
    }
    return 0;
}
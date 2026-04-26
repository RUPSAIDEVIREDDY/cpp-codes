#include<iostream>
using namespace std;
int main()
{
    int  num,sum=0;
    cin>>num;
    int original=num;
    while(num!=0)
    {
        int digit=num%10;
        sum=sum+(digit*digit*digit);
        num=num/10;

    }
    if(original==sum)
    {
        cout<<"Armstrong";
    }
    else
    {
        cout<<"Not Armstrong";
    }
    return 0;
}

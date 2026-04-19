#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,temp,sum=0,digits=0;
    cin>>n;
    temp=n;
    while(temp>0)
    {
        digits++;
        temp=temp/10;
    }
    temp=n;
    while(temp>0)
    {
         int digit=temp%10;
        int power = 1;
for(int i=0; i<digits; i++)
{
    power *= digit;
}
sum += power;
    }
    if(sum==n)
     cout<<"Armstrong";
    else
     cout<<"Not Armstrong";
    return 0;
}

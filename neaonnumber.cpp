#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int square=n*n;
    int sum=0;
    while(square>0)
    {
        sum=sum+square%10;
        square/=10;
    }
    if(sum==n)
     cout<<"Neon number";
    else
     cout<<"not neon number";
    return 0;
}
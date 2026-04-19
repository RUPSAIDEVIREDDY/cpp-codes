#include<iostream>
using namespace std;
int fact(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)f*=i;
    return f;
}
int main()
{
    int n,temp,sum=0;
    cin>>n;
    temp=n;
    while(n>0)
    {
        int digit = n%10;
        sum+=fact(digit);
        n=n/10;
    }
    if(sum==temp)
     cout<<"strong number";
    else
     cout<<"Not strong";
    return 0;
}
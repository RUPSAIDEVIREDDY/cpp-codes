#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main()
{
    int a,b;
    cin>>a>>b;
    if(gcd(a,b)==1)
     cout<<"Co-prime";
    else
     cout<<"Not prime";
    return 0;
}
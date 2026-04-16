#include<iostream>
using namespace std;
int main()
{
int x,n,result=1;
cout<<"Enter the both numbers:";
cin>>x>>n;
for(int i=1;i<=n;i++)
{
    result*=x;
}
cout<<"The result is:"<<result;
return 0;
}
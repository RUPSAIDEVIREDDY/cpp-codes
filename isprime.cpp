#include<iostream>
using namespace std;
bool isPrime(int n)
{
    if(n<2) return false;
    for(int i=2;i*i>=2;i++)
    {
        if(i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
     cout<<"Prime";
    else
     cout<<"Not prime";
    return 0;
}
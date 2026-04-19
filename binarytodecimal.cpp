#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int decimal=0,i=0;
    while(n>0)
    {
        int digit=n%10;
        decimal+=digit*pow(2,i);
        n/=10;
        i++;
    }
    cout<<decimal;
    return 0;
}
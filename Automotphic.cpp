#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int square=n*n;
    if(square%10==n)
     cout<<"Automorphic";
    else
     cout<<"Not Automorphic";
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int xor1=0;
    int xor2=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        xor2=xor2^arr[i];
    }
    for(int i=0;i<=n;i++)
    {
        xor1=xor1^i;
    }
    int missing=xor1^xor2;
    cout<<missing;
    return 0;
}
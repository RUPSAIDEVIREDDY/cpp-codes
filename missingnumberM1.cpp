#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int actualsum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        actualsum+=arr[i];
    }
    int expectedsum = n*(n+1)/2;
    int missing = expectedsum-actualsum;
    cout<<missing;
    return 0;
}
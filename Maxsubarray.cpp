#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    int maxsum=arr[0];
    int curr=arr[0];
    for(int i=0;i<n;i++)
    {
        curr=max(arr[i],curr+arr[i]);
        maxsum=max(maxsum,curr);
    }
    cout<<maxsum;
    return 0;
}
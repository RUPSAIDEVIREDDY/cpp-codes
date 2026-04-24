#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max_sum=arr[0];
    int curr_sum=arr[0];
    for(int i=1;i<n;i++)
    {
        curr_sum=curr_sum+arr[i];
        if(curr_sum<0)
        curr_sum=0;
        if(curr_sum>max_sum)
        max_sum=curr_sum;
    }
    cout<<max_sum;
    return 0;
}
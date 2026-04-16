#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,6,54,6,6,6,8,75,9,8};
    int n=12;
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<" maximum: "<<max;
    return 0;
}
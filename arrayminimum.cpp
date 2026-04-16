#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,5,7,89,9,6};
    int n=7;
    int min=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<" minimum "<<min;
    return 0;
}
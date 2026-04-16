#include<iostream>
using namespace std;
int main()
{
    int arr[3];
    cout<<"Enter numbers:";
    for(int i=0;i<=3;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<=3;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
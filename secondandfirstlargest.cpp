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
    int firstlargest=0,secondlargest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>firstlargest)
        {
            secondlargest=firstlargest;
            firstlargest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=firstlargest)
        {
            secondlargest=arr[i];
        }
       
    }
     cout<<firstlargest<<endl;
     cout<<secondlargest;
    return 0;
}
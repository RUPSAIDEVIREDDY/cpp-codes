#include<iostream>
using namespace std;
int main()
{
    int arr[5]={8,8,9,8,8};
    int max=arr[0];
    int second = -1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>max)
        {
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second && arr[i]!=max)
        {
              second=arr[i];
        }
    }
    cout<<"max:"<<max<<"\n";
    if(second==-1)
    {
        cout<<"not exist";
    }
    else
    {
    cout<<"second:"<<second;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={2,6,8,2,9},count=0;
    int key=2;
    bool found=false;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {  
            count++;   
        }
    }
    if(count==0)
    {
        cout<<"No element found";
    }
    else
    {
        cout<<count;
    }
    return 0;
}
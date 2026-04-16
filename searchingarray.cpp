#include<iostream>
using namespace std;
int main()
{
    int arr[6]={8,3,7,9,6,5};
    int  key=9;
    bool found=false;
    for(int i=0;i<6;i++)
    {
        if(arr[i]==key)
        {
            found=true;
            break;
        }
    }
    if(found)
    {
        cout<<"found";
    }
    else
    {
        cout<<"Not found";
    }
    return 0;
}
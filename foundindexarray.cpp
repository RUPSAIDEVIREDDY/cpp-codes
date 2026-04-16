#include<iostream>
using namespace std;
int main()
{
    int arr[5]={5,6,8,2,9};
    int key=2;
    bool found=false;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==key)
        {  
            cout << "Found at index: " << i;
            found = true;
            break;
        }
    }
    if(found==false)
    {
        cout<<"Not found";
    }
    return 0;
}
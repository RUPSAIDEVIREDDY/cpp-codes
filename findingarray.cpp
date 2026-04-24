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
    int num;
    cin>>num;
    bool Found=false;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            cout<<"Found at:"<<i;
            Found=true;
            break;
        }
       
    }
     if(Found==false)
        {
            cout<<"It doesn't exist";
        }
    return 0;

}
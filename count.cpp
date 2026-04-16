#include<iostream>
using namespace std;
int main()
{
    int count=0;
    for(int i=1;i<=100;i++)
    {
        if(i%2==0)
        {
           count++;
        }
    
    }
    cout<<"Total even numbers:"<<count;
    return 0;
}
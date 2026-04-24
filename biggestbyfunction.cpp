#include<iostream>
using namespace std;
int biggest(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int result=biggest(50,40);
    cout<<result;
    return 0;
}
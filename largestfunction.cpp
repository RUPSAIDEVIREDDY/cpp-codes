#include<iostream>
using namespace std;
int findmax(int a,int b)
{
    if(a>b) return a;
    else return b;  
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<findmax(a,b);
    return 0;
}
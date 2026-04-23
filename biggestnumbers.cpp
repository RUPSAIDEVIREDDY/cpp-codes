#include<iostream>
using namespace std;
int main()
{
    int num,biggest=0;
    for(int i=1;i<=5;i++)
    {
        cin>>num;
    if(num>biggest)
    {
        biggest=num;
    }
}
    cout<<biggest;
    return 0;
}
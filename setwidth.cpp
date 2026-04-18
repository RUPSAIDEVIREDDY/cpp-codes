#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=100,b=50,c=45;
    cout<<setw(20)<<a<<endl;
    cout<<left<<setw(20)<<b<<endl;
    cout<<right<<setw(20)<<c<<endl;
    cout<<setfill('*')<<setw(20)<<a;
    return 0;
}
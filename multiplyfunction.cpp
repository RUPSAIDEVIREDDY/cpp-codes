#include<iostream>
using namespace std;
void greet()
{
cout<<"Welcome to c++ programing"<<endl;
}

int mul(int a,int b)
{
    return a*b;
}
int main()
{
    greet();
    int product=mul(5,6);
    cout<<product;
    return 0;
}
#include<iostream>
using namespace std;
void change(int* a)
{
    *a=22;
}
int main()
{
    int x=5;
    change(&x);
    cout<<x;
    return 0;
}
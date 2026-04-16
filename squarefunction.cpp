#include<iostream>
using namespace std;
int square(int x)
{
    return x*x;
}
int main()
{
    int result=square(7);
    cout<<"square of 7:  "<<result;
    return 0;
}
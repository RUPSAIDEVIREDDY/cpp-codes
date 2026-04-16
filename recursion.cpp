#include<iostream>
using namespace std;
void print(int i)
{
    if(i>5)
    return;
    cout<<i<<" ";
    print(i+1);

}
int main()
{
    print(1);
}
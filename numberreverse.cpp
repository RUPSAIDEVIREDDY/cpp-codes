#include<iostream>
using namespace std;
int main()
{
    int num,reverse=0;
    cin>>num;
    int original=num;
    while(num!=0)
    {
    int digit=num%10;
     reverse=reverse*10+digit;
    num=num/10;
    }
    if(original==reverse)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"Not palindrome";
    }
    return 0;

}
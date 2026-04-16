#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter name:";
    cin>>name;
    for(int i=0;i<=name.length();i++)
    {
        name[i]=toupper(name[i]);
    }
    cout<<"upper case name:"<<name;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    float time,fine;
    cout<<"Enter parking time:";
    cin>>time;
    if(time<=2)
    {
        fine=100;
    }
    else if(time>2 && time<=5)
    {
        fine=50;
    }
    else
    {
        fine=20;
    }
    cout<<"Parking fine is:"<<fine;
    return 0;
}
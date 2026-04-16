#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int Pa,dis;
    float discountAmount,Fa;
    cout<<"Enter Purchase amount:";
    cin>>Pa;
    if(Pa<1000)
    {
        dis=5;
    }
    else if(Pa>=1000 && Pa<=5000)
    {
        dis=10;
    }
    else
    {
        dis=15;
    }
        discountAmount=Pa*dis/100.00;
        Fa=Pa-discountAmount;
        cout << fixed << setprecision(2);
        cout<<"The discount Amount:"<<discountAmount;
        cout<<"The final Amount is:"<<Fa;
        return 0;
}
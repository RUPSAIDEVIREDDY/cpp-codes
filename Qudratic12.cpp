#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,D,root1,root2;
    cout<<"Enter abc values:";
    cin>>a>>b>>c;
    D=b*b-4*a*c;
    if(D>0)
    {
        root1=-b/(2*a);
        cout<<"Two real and same roots:\n";
        cout<<"Root="<<root1<<endl;
    }
    else
    {
        cout<<"Roots are complex";
    }
    return 0;
}
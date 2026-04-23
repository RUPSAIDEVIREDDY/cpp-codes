#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==1)
            {
                if(j==3)
                
                    cout<<"* ";
                    else
                    cout<<"  ";
                

            }
            else if(i==2)
            {
                if(j==2||j==3||j==4)
                cout<<"* ";
                else
                cout<<"  ";
            }
            else if(i==3)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    return 0;
}
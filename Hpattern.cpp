#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=4;j++)
        {
            if(i==1)
            {
                if(j==1||j==4)
                cout<<"* ";
                else 
                cout<<"  ";
            }
            else if(i==2)
            {
                if(j==1||j==4)
                cout<<"* ";
            
             else
            
                cout<<"  ";
            }
            else if(i==3)
            {
                cout<<"* ";
            }
            else if(i==4)
            {
                if(j==1||j==4)
                cout<<"* ";
                else
                cout<<"  ";
            }
            else if(i==5)
            {
                if(j==1||j==4)
                
                    cout<<"* ";
                else
                 cout<<"  ";

            }
             



        }
        cout<<endl;
    }
    return 0;
}
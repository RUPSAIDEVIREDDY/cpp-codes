#include<iostream>
using namespace std;
int main()
{
   
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
          if(i==1||i==4)
          {
            cout<<"* "<<endl;
          }
          for(int j=0;j<4;j++)
          {
          if(j==1||j==4)
          {
            cout<<"* ";
          }
        }
        }

     
    }
    return 0;

}
#include<iostream>
using namespace std;
int main()
{
  for(int row=1;row<=5;row++)
  {
    for(int star=5;star>=row;star--)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
  
  return 0;
}
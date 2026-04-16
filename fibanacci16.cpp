#include<iostream>
using namespace std;
int main()
{
    int n,first,second,nextterm;
    cout<<"Enter first term:";
    cin>>first;
    cout<<"Enter second term:";
    cin>>second;
    cout<<"Enter n value:";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
      cout<<first;
      if(i<n)cout<<", ";
      nextterm=first+second;
      first=second;
      second=nextterm;
    }
    cout<<endl;
    return 0;

}
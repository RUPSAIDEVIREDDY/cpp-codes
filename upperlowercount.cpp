#include<iostream>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int lower=0,upper=0;
   for(int i=0;i<s.length();i++)
   {
    if(isupper(s[i]))
    {
        upper++;
    }
    else if(islower(s[i]))
    {
        lower++;
    }
    
   }
   cout<<"upper:"<<upper<<endl;
   cout<<"lower:"<<lower<<endl;
   return 0;
}
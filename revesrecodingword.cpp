#include<iostream>
using namespace std;
int main()
{
    string s,words[100],word ="";
    int count=0;
    getline(cin,s);
    for(int i=0;i<=s.length();i++)
    {
        if(s[i]==' '||i==s.length())
        {
           words[count]=word;
           count++;
           word="";
        }
        else
        {
            word=word+s[i];
        }
    }
    for(int i=count-1;i>=0;i--)
    {
      cout<<words[i]<<" ";
    }
    return 0;

}
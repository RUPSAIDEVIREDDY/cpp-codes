#include<iostream>
using namespace std;
int main()
{
    string s,result="";
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
       bool found=false;
       for(int j=0;j<result.length();j++)
       {
        if(result[j]==s[i])
        {
            found=true;
            break;
        }
       }
       if(found==false)
       result=result+s[i];
    }
    cout<<result;
    
    return 0;
}
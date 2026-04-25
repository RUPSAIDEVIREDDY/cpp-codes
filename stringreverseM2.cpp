#include<iostream>
using namespace std;
int main()
{
    string s,rev="";
    cin>>s;
    string original=s;
    for(int i=s.length()-1;i>=0;i--)
    {
        cout<<s[i];
        rev=rev+s[i];
    }
    cout<<endl;
    if(original==rev)
    cout<<"palindrome";
    else
    cout<<"not palindrome";
    return 0;

}
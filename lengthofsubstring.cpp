#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
 string s;
 cin>>s;
 unordered_set<char> st;
 int left=0;
 int right=0;
 int maxLen=0;
 while(right<s.length())
 {
    if(st.find(s[right])==st.end())
    {
        st.insert(s[right]);
        maxLen=max(maxLen,right-left+1);
        right++;
    }
    else
    {
        st.erase(s[left]);
        left++;
    }

 }
 cout<<maxLen<<endl;
 return 0;
}
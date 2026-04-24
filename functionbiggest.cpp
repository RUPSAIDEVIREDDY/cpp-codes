#include<iostream>
using namespace std;
int findBiggest()
{
    int num,big=0;
    for(int i=1;i<=5;i++)
    {
        cin>>num;
        if(num>big)
        {
            big=num;
        }
    }
    return big;
}
int main()
{
    int result = findBiggest();
    cout<<result;
    return 0;
}
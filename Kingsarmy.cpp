#include<iostream>
using namespace std;
int main()
{
    int N,R,END;
    cin>>N>>R>>END;
    long long dp[105][105]={0};
    dp[1][1]=1;
    for(int i=2;i<=N;i++)
    {
        long long total=0;
        for(int j=1;j<=R;j++)
        {
            total+=dp[i-1][j];
        }
        for(int j=1;j<=R;j++)
        {
            dp[i][j]=total-dp[i-1][j];
        }
    }
    cout<<dp[N][END];
    return 0;
}
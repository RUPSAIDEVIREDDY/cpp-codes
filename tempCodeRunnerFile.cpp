#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int maxsum;
    cin>>maxsum;
    vector<vector<bool>>dp(n + 1, vector<bool>(maxsum + 1, false));
    dp[0][0]=true;
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s <= maxsum; s++) {
   dp[i][s] = dp[i - 1][s];

            
            if (s >= arr[i - 1]) {
                dp[i][s] = dp[i][s] || dp[i - 1][s - arr[i - 1]];
            }
        }
    }

    for (int s = maxsum; s >= 0; s--) {
        if (dp[n][s]) {
            cout << s;
            break;
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N =1e5+5;
    int happy[N][4];
    int dp[N][4];
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=3; j++)
        {
            dp[i][j] =-1;
            cin>>happy[i][j];
        }
    dp[1][1]=happy[1][1];
    dp[1][2]=happy[1][2];
    dp[1][3]=happy[1][3];
    for(int i=2; i<=n; i++)
        for(int j=1; j<=3; j++)
            for(int last=1; last<=3; last++)
                if(last!=j)
                    dp[i][j] = max(dp[i-1][last]+happy[i][j],dp[i][j]);
    cout<<max({dp[n][1],dp[n][2],dp[n][3]});
    return 0;
}

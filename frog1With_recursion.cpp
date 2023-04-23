#include<bits/stdc++.h>
using namespace std;
int h[100005];
int dp[100005];
int n,k;
int solv( int n)
{

// base case
    if(n == 1)return 0;
// if the current state is solve then return the result
    if(dp[n]!=-1) return dp[n];
// solve the current state
    int ans =2e9;
    for(int i=1; i<=k; i++)
    {
        if(n-i<=0)break;
        int ans1 = solv(n-i)+ abs(h[n]-h[n-i]);
        ans =min(ans,ans1);
    }
    dp[n]=ans;
    return ans;
}
int main()
{
    cin>>n>>k;
    for(int i=0; i<=n; i++)dp[i]=-1;
    for(int i=1; i<=n; i++)
        cin>>h[i];
    cout<<solv(n);
    return 0;
}

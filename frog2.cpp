#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>ston;
    int ar[100005];
    int n,k;
    cin>>n,k;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ston.push_back(x);
    }
    ar[0]=0;
    ar[1] = abs(ston[1] - ston[0]);
    if(n>2)
    {
        for(int i=2; i<n; i++)
        {
            int now =1e9;
            for(int j=1; j<=k; j++)
            {
                if(i-j<0)break;
                    now = min(now,ar[i-j] + abs( ston[i] - ston[i-j]));
            }
            ar[i] = now;
        }
    }
    cout<<ar[n-1];
    return 0;
}

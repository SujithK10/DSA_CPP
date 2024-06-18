#include <iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    vector<int> arr={10 ,30, 40, 50, 20};
    int n=arr.size();
    int k=3;
    vector<int> dp(n+1,0);
    dp[0]=0;
    for(int i=1;i<n;i++)
    {
        int minstep=INT_MAX;
        for(int j=1;j<=k;j++)
        {
            if(i-j>=0)
            {
               int  jump=dp[i-j]+abs(arr[i]-arr[i-j]);
                minstep=min(minstep,jump);
            }
        }
        dp[i]=minstep;
    }
    cout<<dp[n-1];
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int lis(int ind,int prev,vector<vector<int>> &dp,vector<int> &A,int n)
{
    if(ind==n)
    {
        return 0;
    }
    if(dp[ind][prev+1]!=-1) return dp[ind][prev+1];
    int res=lis(ind+1,prev,dp,A,n);
    if (prev == -1 || (A[prev] < A[ind] && ((A[prev] & A[ind]) * 2 < (A[prev] | A[ind])))) 
    {
        res=max(res,1+lis(ind+1,ind,dp,A,n));
    }
    dp[ind][prev+1]=res;
    return res;
}
int main()
{
    int n;
     cin >> n;
     vector<vector<int>> dp(n,vector<int>(n+1,-1));
     vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }
    int res=lis(0,-1,dp,A,n);
    cout<<res;
}

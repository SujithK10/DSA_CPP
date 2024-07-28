#include<iostream>
#include<vector>
using namespace std;
int fnc(int i,int j,vector<vector<int>> &dp,int n)
{
    if(i==1) return 1;

    if(dp[i][j]!=-1) return dp[i][j];

    int res=0;
    for(int x=0;x<n;x++)
    {
        if(j%x==0)
        {
            res=res+fnc(i-1,x,dp,n);
        }
    }
    dp[i][j]=res;
    return dp[i][j];
}
int main()
{
    int n,k;
    cin>>n>>k;
    int res=0;
    vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
    for(int j=1;j<n;j++)
    {
        res=res+fnc(k,j,dp,n);

    }
    cout<<res;


}
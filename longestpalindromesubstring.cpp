#include<bits/stdc++.h>
using namespace std;

string longpalinstring(string str);

int main()
{
    string str="cbbd";
    string ans=longpalinstring(str);
    cout<<ans;
}

string longpalinstring(string str)
{
    int n=str.size();
    int maxlen=0;
    string ans="";
    vector<vector<int>> dp(n, vector<int>(n, 0));

    for(int diff=0; diff<n; diff++)
    {
        for(int i=0, j=i+diff; j<n; i++, j++)
        {
            if(i==j)
            {
                dp[i][j] = 1;
            }
            else if(diff==1){
                dp[i][j] = (str[i]==str[j]) ? 2 : 0;
            }
            else
            {
                if(str[i]==str[j] && dp[i+1][j-1]>0)
                {
                    dp[i][j] = dp[i+1][j-1] + 2;
                }
            }
            if(dp[i][j] > maxlen)
            {
                maxlen = dp[i][j];
                ans = str.substr(i, j - i + 1);
            }
        }
    }
    return ans;
}


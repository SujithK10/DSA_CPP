#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,2,4};
    int n=nums.size();
    vector<int> dp(n,0);
    dp[0]=nums[0];
    for(int i=1;i<n;i++)
    {
        int take=nums[i];
        if(i>1)
        {
            take=take+dp[i-2];
        }
        int nottake=0+dp[i-1];
        dp[i]=max(take,nottake);
    }
    cout<< dp[n-1];
   

}

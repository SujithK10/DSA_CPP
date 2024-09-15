    int uniquePathsWithObstacles(vector<vector<int>>& nums) {
    int m = nums.size();
    int n = nums[0].size();
    
    
    vector<vector<int>> dp(m, vector<int>(n, 0));
    

    if (nums[0][0] == 1) return 0;
 
    dp[0][0] = 1;

    for (int j = 1; j < n; ++j) {
        dp[0][j] = (nums[0][j] == 0) ? dp[0][j - 1] : 0;
    }
    
 
    for (int i = 1; i < m; ++i) {
        dp[i][0] = (nums[i][0] == 0) ? dp[i - 1][0] : 0;
    }
    
    
    for (int i = 1; i < m; ++i) {
        for (int j = 1; j < n; ++j) {
            if (nums[i][j] == 0) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            } else {
                dp[i][j] = 0;
            }
        }
    }
    
    return dp[m - 1][n - 1];
}

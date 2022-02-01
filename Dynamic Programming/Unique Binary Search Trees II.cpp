int Solution::numTrees(int A) {
    int dp[A+2];
    memset(dp, 0, sizeof(dp));
    
    dp[0] = 1, dp[1] = 1;
    
    for(auto i=2; i<=A; i++)
    {
        for(auto j=1; j<=i; j++)
        {
            dp[i] += (dp[j-1] * dp[i-j]);
        }
    }
    
    return dp[A];
}

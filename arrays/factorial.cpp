string Solution::solve(int A) {
    long long dp[101];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<101;i++){
        dp[i]=i*dp[i-1];
    }
    string ans = to_string(dp[A]);
    return ans;
}


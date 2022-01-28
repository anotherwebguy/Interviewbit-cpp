int Solution::maxProfit(const vector<int> &A) {
    long long n = A.size();
    if(n==0 ) return 0;
    long long dp[2+1][n];
    for(int i=0;i<=2;i++){
        for(int j=0;j<n;j++){
            if(i==0 || j==0) dp[i][j]=0;
        }
    }
    for(long long t=1;t<=2;t++) {
        long long max_val = LLONG_MIN;
        for(long long d = 1;d<n;d++) {
            if(dp[t-1][d-1] - A[d-1] > max_val) max_val = dp[t-1][d-1] - A[d-1];
            if(max_val+A[d]>dp[t][d-1]) dp[t][d] = max_val+A[d];
            else dp[t][d] = dp[t][d-1];
        }
    }
    return dp[2][n-1];
}

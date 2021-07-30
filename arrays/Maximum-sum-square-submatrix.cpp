int Solution::solve(vector<vector<int> > &A, int B) {
       int n=A.size();
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        int maxsum=INT_MIN;
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[0].size();j++){
                dp[i][j]=A[i-1][j-1]+dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1];
            }
        }
        for(int i=1;i<dp.size();i++){
            for(int j=1;j<dp[0].size();j++){
                if(i-B>=0 && j-B>=0){
                    int x=dp[i][j]-dp[i-B][j]-dp[i][j-B]+dp[i-B][j-B];
                    maxsum=max(maxsum,x);
                }
            }
        }
        return maxsum;
}

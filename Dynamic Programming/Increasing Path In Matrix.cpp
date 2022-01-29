int solveme(vector<vector<int>>& arr, vector<vector<int>>& dp, int i, int j, int n, int m){
    if(dp[i][j]!=-1) return dp[i][j];
    int op1=0,op3=0;
    if(i+1<n && arr[i+1][j]>arr[i][j]){
        op1 = solveme(arr,dp,i+1,j,n,m);    
    }
    if(j+1<m && arr[i][j+1]>arr[i][j]){
        op3 = solveme(arr,dp,i,j+1,n,m);    
    }
    dp[i][j] = max(op1,op3)+1;
    return dp[i][j];
}

int Solution::solve(vector<vector<int> > &arr) {
    int n = arr.size();
    int m = arr[0].size();
    vector<vector<int>> dp(n,vector<int>(m,-1));
    solveme(arr,dp,0,0,n,m);
    return dp[n-1][m-1]==-1 ? -1 : dp[0][0];
}

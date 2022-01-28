int dp[151][151][2];
int solve(string A, int i, int j, int isTrue) {
    if(i>j) return 0;
    if(i==j) {
        if(isTrue) return A[i]=='T';
        else return A[i]=='F';
    }
    if (dp[i][j][isTrue] != -1)
        return dp[i][j][isTrue];
    int ans=0;
    for(int k=i+1;k<=j-1;k+=2) {
        int leftF,rightF,leftT,rightT;
        if (dp[i][k - 1][1] == -1)
        {
            leftT = solve(A, i, k - 1, 1);
        }
        else {
            leftT = dp[i][k - 1][1];
        }
        if (dp[k + 1][j][1] == -1)
        {
            rightT = solve(A, k + 1, j, 1);
        } 
        else
        {
            rightT = dp[k + 1][j][1];
        }
        if (dp[i][k - 1][0] == -1)
        {
            leftF = solve(A, i, k - 1, 0);
        }
        else
        {
            leftF = dp[i][k - 1][0];
        }
        if (dp[k + 1][j][0] == -1)
        {
            rightF = solve(A, k + 1, j, 0);
        }
        else
        {
            rightF = dp[k + 1][j][0];
        }
        if(A[k]=='&') {
            if(isTrue) ans+=(leftT*rightT)%1003;
            else ans+=(leftF*rightT+leftT*rightF+leftF*rightF)%1003;
            ans %=1003;
        } else if(A[k]=='|') {
            if(isTrue) ans+=(leftT*rightT+leftT*rightF+leftF*rightT)%1003;
            else ans+=(leftF*rightF)%1003;
            ans %=1003;
        } else if(A[k]=='^') {
            if(isTrue) ans+=(leftF*rightT+leftT*rightF)%1003;
            else ans+=(leftF*rightF+leftT*rightT)%1003;
            ans %=1003;
        }
        dp[i][j][isTrue] = ans%1003;
    }
    return ans%1003;
}

int Solution::cnttrue(string A) {
    int n = A.size();
    memset(dp, -1, sizeof(dp));
    return solve(A,0,n-1,1)%1003;
}

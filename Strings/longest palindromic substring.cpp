
string Solution::longestPalindrome(string A) {
    int start=0,max=0;
    int n=A.size();
    bool dp[n][n];
    memset(dp,0,sizeof(dp));
    for(int i=0;i<n;i++){
        dp[i][i]=1;
        max=1;
    }
    for(int i=0;i<n;i++){
        if(A[i]==A[i+1]){
            dp[i][i+1]=1;
            max=2;
            start=i;
        }
    }
    for(int k=3;k<=n;k++){
        for(int i=0;i<n-k+1;i++){
            int j=i+k-1;
            if(dp[i+1][j-1] && A[i]==A[j]){
                dp[i][j]=1;
                if(k>max){
                    start=i;
                    max=k;
                }
            }
        }
    }
    string ans;
    for(int i=start;i<=start+max-1;i++){
        ans+=A[i];
    }
    return ans;
}

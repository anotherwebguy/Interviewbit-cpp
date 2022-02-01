bool is_palindrome(string s,int start,int end)
{
    while(start<=end)
    {
        if(s[start]!=s[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}
int helper(string &s,vector<vector<int>>&dp,int start,int end)
{
    if(start>=end || is_palindrome(s,start,end))
    {
        return dp[start][end]=0;
    }
    if(dp[start][end]!=-1)
    {
        return dp[start][end];
    }
    int ans=INT_MAX;
    for(int i=start;i<end;i++)
    {
        if(dp[start][i]==-1)
        {
            dp[start][i]=helper(s,dp,start,i);
        }
        if(dp[i+1][end]==-1)
        {
            dp[i+1][end]=helper(s,dp,i+1,end);
        }
        ans=min(ans,1+dp[start][i]+dp[i+1][end]);
    }
    return dp[start][end]=ans;
}
int Solution::minCut(string s)
{
    int n=s.length();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    return helper(s,dp,0,n-1);
}

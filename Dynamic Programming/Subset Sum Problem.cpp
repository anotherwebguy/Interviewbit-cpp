int Solution::solve(vector<int> &A, int B) {
    int sum = 0;
    int n = A.size();
 
    // Create an array to store results of subproblems
    bool dp[n + 1][B + 1];
 
    // Initialize first column as true. 0 sum is possible
    // with all elements.
    for (int i = 0; i <= n; i++)
        dp[i][0] = true;
 
    // Initialize top row, except dp[0][0], as false. With
    // 0 elements, no other sum except 0 is possible
    for (int i = 1; i <= B; i++)
        dp[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= B; j++) {
            // If i'th element is excluded
            dp[i][j] = dp[i - 1][j];
 
            // If i'th element is included
            if (A[i - 1] <= j)
                dp[i][j] |= dp[i - 1][j - A[i - 1]];
        }
    }
    return dp[n][B]==true;
}

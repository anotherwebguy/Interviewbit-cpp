int Solution::solve(vector<vector<int> > &A) {
    int i,j;
    int R = A.size(), C = A[0].size();
    int S[R][C];
     
    /* Set first column of S[][]*/
    for(i = 0; i < R; i++)
        S[i][0] = A[i][0];
     
    /* Set first row of S[][]*/
    for(j = 0; j < C; j++)
        S[0][j] = A[0][j];
         
    /* Construct other entries of S[][]*/
    for(i = 1; i < R; i++)
    {
        for(j = 1; j < C; j++)
        {
            if(A[i][j] == 1)
                S[i][j] = min(S[i][j-1],min( S[i-1][j],
                                S[i-1][j-1])) + 1;
            else
                S[i][j] = 0;
        }
    }
    int max_of_s = S[0][0];
    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            if(max_of_s < S[i][j])
            {
                max_of_s = S[i][j];
            }
        }            
    }
    return max_of_s*max_of_s;
}

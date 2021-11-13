void solve(vector<vector<string>> &res, vector<string> &board, 
            int col,vector<int> &left, vector<int> &upper, 
                vector<int> &lower, int n) {
    if(col==n) {
        res.push_back(board);
        return;
    }
    for(int row=0;row<n;row++){
        if(left[row]==0 && lower[row+col]==0 && upper[n-1+col-row]==0) {
            left[row]=1;
            lower[row+col]=1;
            upper[n-1+col-row]=1;
            board[row][col]='Q';
            solve(res,board,col+1,left,upper, lower,n);
            board[row][col]='.';
            left[row]=0;
            lower[row+col]=0;
            upper[n-1+col-row]=0;
        }
    }
}

vector<vector<string> > Solution::solveNQueens(int n) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<vector<string>> res;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
        board[i]=s;
    }
    vector<int> left(n,0), upper(2*n - 1, 0), lower(2*n - 1, 0);
    solve(res,board,0,left,upper,lower,n);
    return res;
}

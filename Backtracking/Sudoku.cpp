bool isvalid(vector<vector<char>> &A, int &row, int &col, char &c) {
    for(int i=0;i<9;i++){
        if(A[row][i]==c) return false;
        if(A[i][col]==c) return false;
        if(A[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
    }
    return true;
}

bool solve(vector<vector<char>> &A) {
    for(int row=0;row<A.size();row++){
        for(int col=0;col<A[0].size();col++){
            if(A[row][col]=='.') {
                for(char c='1';c<='9';c++){
                    if(isvalid(A,row,col,c)) {
                        A[row][col]=c;
                        if(solve(A)==true){
                            return true;
                        } else {
                            A[row][col]='.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void Solution::solveSudoku(vector<vector<char> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    solve(A);
}

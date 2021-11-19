

int Solution::isValidSudoku(const vector<string> &A) {
    unordered_map<int, unordered_set<char>> row, col, grid;
    for(int i=0; i<A.size(); i++){
        for(int j=0; j<A[i].length(); j++){
            if(isdigit(A[i][j])){
                if(row[i].find(A[i][j]) != row[i].end() || col[j].find(A[i][j]) != col[j].end())
                    return 0;
                int sec = (j/3)+10*(i/3);
                if(grid[sec].find(A[i][j]) != grid[sec].end())
                    return 0;
                row[i].insert(A[i][j]);
                col[j].insert(A[i][j]);
                grid[sec].insert(A[i][j]);
            }
        }
    }
    return 1;
}

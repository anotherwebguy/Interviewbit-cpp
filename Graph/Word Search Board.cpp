int x[4] = {-1,1,0,0};
int y[4] = {0,0,-1,1};

bool search(vector<string>& board,int row, int col,int idx, string &word){
       // v[row][col]=true;
        if(idx==word.size()) return true;
        for(int dir = 0;dir<4;dir++){
            int r = row+x[dir];
            int c = col+y[dir];
            if(r>=0 && c>=0 && r<board.size() && c<board[0].size() && board[r][c]==word[idx] && search(board,r,c,idx+1,word)) return true;
        }
       // v[row][col]=false;
        return false;
        
    }

int Solution::exist(vector<string> &board, string word) {
    for(int r=0;r<board.size();r++){
            for(int c = 0;c<board[0].size();c++){
                if(board[r][c]==word[0] && search(board,r,c,1,word)) return 1;
            }
        }
        return 0;
}

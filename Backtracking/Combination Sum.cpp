void backtrack(vector<int> A, int B, int pos, vector<int> &curr, vector<vector<int>> &res) {
    if(pos==A.size()) {
        if(B==0){
            res.push_back(curr);
        }
        return;
    }
    if(A[pos]<=B){
        curr.push_back(A[pos]);
        backtrack(A,B-A[pos],pos,curr,res);
        curr.pop_back();
    }
    backtrack(A,B,pos+1,curr,res);
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int>> res;
    vector<int> curr;
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    backtrack(A,B,0,curr,res);
    return res;
}

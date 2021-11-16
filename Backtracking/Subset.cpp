void backtrack(vector<int> A, int pos, vector<int> &curr, vector<vector<int>> &res) {
    res.push_back(curr);
    for(int i=pos;i<A.size();i++){
        curr.push_back(A[i]);
        backtrack(A,i+1,curr,res);
        curr.pop_back();
    }
}

vector<vector<int>> Solution::subsets(vector<int> &A) {
    vector<vector<int>> res;
    vector<int> curr;
    sort(A.begin(),A.end());
    backtrack(A,0,curr,res);
    return res;
}

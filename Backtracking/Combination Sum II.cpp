void backtrack(vector<int> A, int B, int pos, vector<int> &curr, set<vector<int>> &res) {

    if(B==0){
        res.insert(curr);
        return;
    }
    for(int i=pos;i<A.size();i++) {
        if(i>pos && A[pos]==A[pos-1]) continue;
        if(A[i]>B) break;
        curr.push_back(A[i]);
        backtrack(A,B-A[i],i+1,curr,res);
        curr.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    set<vector<int>> res;
    vector<int> curr;
    sort(A.begin(),A.end());
    backtrack(A,B,0,curr,res);
    vector<vector<int>> ans;
    for(auto i:res) {
        ans.push_back(i);
    }
    return ans;
}

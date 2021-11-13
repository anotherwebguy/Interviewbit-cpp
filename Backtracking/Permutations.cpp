void allpermutations(vector<int> &A, vector<vector<int>> &res, int i, int n) {
    if(i==n-1) {
        res.push_back(A);
    }
    for(int j=i;j<n;j++){
        swap(A[i],A[j]);
        allpermutations(A,res,i+1,n);
        swap(A[i],A[j]);
    }
}


vector<vector<int> > Solution::permute(vector<int> &A) {
    int n=A.size();
    vector<vector<int>> res;
    allpermutations(A,res,0,n);
    return res;
}

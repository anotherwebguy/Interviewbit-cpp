int Solution::adjacent(vector<vector<int> > &A) {
    if(A.size() == 0){
        return 0;
    }
    
    int inc = 0, exc = 0;
    
    for(int i = 0; i < A[0].size(); i++){
        int num = max(A[0][i], A[1][i]);
        
        int temp = max(exc, inc);
    
        inc = exc + num;
        exc = temp;
    }
    
    
    return max(inc, exc);
}

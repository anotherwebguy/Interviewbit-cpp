int Solution::solve(vector<int> &A) {
    set<int> m;
    int min=-1;
    for(int i=A.size()-1;i>=0;i--){
        if(m.find(A[i])!=m.end()) min=i;
        else m.insert(A[i]);
    }
    if(min==-1) return -1;
    else return A[min];
}

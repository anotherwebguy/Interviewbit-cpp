int Solution::solve(vector<int> &A) {
    stack<int> s;
    int root = INT_MIN;
    for(int i=0;i<A.size();i++){
        if(root>A[i]) return 0;
        while(!s.empty() && A[i]>s.top()){
            root = s.top();
            s.pop();
        }
        s.push(A[i]);
    }
    return 1;
}

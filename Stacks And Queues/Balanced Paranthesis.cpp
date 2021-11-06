int Solution::solve(string A) {
    stack<char> s;
    for(int i=0;i<A.size();i++){
        if(A[i]=='(') s.push('(');
        else {
            if(s.empty()) return 0;
            s.pop();
        };
    }
    if(s.empty()) return 1;
    return 0;
}


int Solution::solve(string A) {
    int c=0;
    stack<char> s;
    for(int i=0;i<A.size();i++){
        if(A[i]=='(') {
            s.push('(');
        } else {
            if(s.empty()){
                c++;
            } else {
                s.pop()
            }
        }
    }
    return c+s.size();
}

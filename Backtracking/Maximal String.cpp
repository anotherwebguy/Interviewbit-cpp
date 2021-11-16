void backtrack(string A, int B, string &ans) {
    if(B==0) return;

    for(int i=0;i<A.length()-1;i++) {
        for(int j=i+1;j<A.length();j++) {
            if(A[j]>A[i]) {
                swap(A[i],A[j]);
                if(A.compare(ans)>0){
                    ans=A;
                }
                backtrack(A,B-1,ans);
                swap(A[i],A[j]);
            }
        }
    }
}

string Solution::solve(string A, int B) {
    string ans="-1";
    backtrack(A,B,ans);
    return ans;
}

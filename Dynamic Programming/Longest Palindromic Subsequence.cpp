

int lcs(string A, string B){
    int t[A.size()+1][B.size()+1];
    for(int i=0;i<=A.size();i++){
        for(int j=0;j<=B.size();j++){
            if(i==0 || j==0) {
                t[i][j]=0;
            } else if(A[i-1]==B[j-1]){
                t[i][j]=t[i-1][j-1]+1;
            } else {
                t[i][j]=max(t[i-1][j],t[i][j-1]);
            }
        }
    }
    return t[A.size()][B.size()];
}

int Solution::solve(string A) {
    string B=A;
    reverse(A.begin(),A.end());
    return lcs(B,A);
}



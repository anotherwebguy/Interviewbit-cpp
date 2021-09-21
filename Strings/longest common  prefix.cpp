string Solution::longestCommonPrefix(vector<string> &A) {
    if(A.size()==0) return "";
    else if(A.size()==1) return A[0];
    sort(A.begin(),A.end());
    int mi=min(A[0].size(),A[A.size()-1].size());
    int i=0
    while(i<mi && A[0][i]==A[A.size()-1][i]) i++;
    return A[0].substr(0,i);
}

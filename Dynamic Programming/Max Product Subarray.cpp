int Solution::maxProduct(const vector<int> &A) {
    int maxend=A[0],minend=A[0],maxfar=A[0],flag=0;
    for(int i=1;i<A.size();i++){
        if(A[i]>0){
            maxend=max(maxend*A[i],A[i]);
            minend = min(A[i],minend*A[i]);
        }else {
            int temp = maxend;
            maxend = max(minend*A[i],A[i]);
            minend = min(A[i],temp*A[i]);
        }
        maxfar=max(maxfar,maxend);
    }
   // if(flag==0 && maxfar==0) return 0;
    return maxfar;
}

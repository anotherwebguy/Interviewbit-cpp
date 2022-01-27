int Solution::jump(vector<int> &A) {
    int maxR = A[0];
    int step = A[0];
    int jump = 1;
    int n = A.size();
    if(n==1) return 0;
    else if(A[0]==0) return -1;
    else {
        for(int i=1;i<A.size();i++){
            if(i==n-1) return jump;
            maxR = max(maxR,i+A[i]);
            step--;
            if(step==0){
                jump++;
                if(i>=maxR) return -1;
                step = maxR-i;
            }
        }
    }
    return jump;
}

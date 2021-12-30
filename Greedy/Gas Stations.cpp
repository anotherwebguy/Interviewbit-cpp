int Solution::canCompleteCircuit(const vector<int> &A, const vector<int> &B) {
    if(A.size()==1 && B[0]<=A[0]) return 0;
    int extra=0,req=0,start=0;
    for(int i=0;i<A.size();i++){
        extra+=(A[i]-B[i]);
        if(extra<0){
            start=i+1;
            req+=extra;
            extra=0;
        }
    }
    if(req+extra>=0) return start;
    return -1;
}

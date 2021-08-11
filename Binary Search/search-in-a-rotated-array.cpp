
int Solution::search(const vector<int> &A, int B) {
    int l=0,h=A.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(A[m]==B) return m;
        else if(A[l]<=A[m]){
            if(B>=A[l] && B<=A[m]) h=m-1;
            else l=m+1;
        }
        else {
            if(B>=A[m] && B<=A[A.size()-1]) l=m+1;
            else h=m-1;
        }
    }
    return -1;
}

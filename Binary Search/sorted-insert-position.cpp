
int Solution::searchInsert(vector<int> &A, int B) {
    int l=0,h=A.size()-1;
    while(l<=h){
        int m=(l+h)>>1;
        if(A[m]<B) l=m+1;
        else h=m-1;
    }
    return l;
}

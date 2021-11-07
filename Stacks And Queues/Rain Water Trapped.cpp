int Solution::trap(const vector<int> &A) {
    int n=A.size();
    int l=0,h=n-1;
    int left=0,right=0,ans=0;
    while(l<=h){
        if(A[l]<A[h]){
            if(A[l]>left){
                left=A[l];
            } else {
                ans+=left-A[l];
            }
            l++;
        } else {
            if(A[h]>right){
                right=A[h];
            } else {
                ans+=right-A[h];
            }
            h--;
        }
    }
    return ans;
}

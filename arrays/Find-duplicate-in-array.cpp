int Solution::repeatedNumber(const vector<int> &A) {
int n=A.size();
        vector<int> B(n,0);
        for(int i=0;i<n;i++){
            B[i]=A[i];
        }
        for(int i=0;i<n;i++){
            B[(B[i]%n)-1]+=n;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            if(B[i]/n>1){
                ans=i+1;
                break;
            }
        }
        return ans;
}

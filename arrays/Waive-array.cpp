vector<int> Solution::wave(vector<int> &A) {
        int n=A.size();
        sort(A.begin(),A.end());
        vector<int> res(n);
        if(n<=1){
            return A;
        }
        if(n%2==0){
            for(int i=0;i<n;i++){
            if(i%2==0){
                res[i+1]=A[i];
            } else {
                res[i-1]=A[i];
            }
        }
        } else {
            int i=0;
            for( i=0;i<n-1;i++){
            if(i%2==0){
                res[i+1]=A[i];
            } else {
                res[i-1]=A[i];
            }
        }
        res[i]=A[i];
        }
        
        return res;
}

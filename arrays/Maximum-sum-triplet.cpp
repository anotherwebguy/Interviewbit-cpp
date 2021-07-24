int solve(vector<int> &A){
        int n= A.size();
        int sum=0;
        vector<int> rightmax(n);
        int a[n];
        rightmax[n-1]=A[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=max(rightmax[i+1],A[i]);
        }
        set<int> left;
        left.insert(A[0]);
        for(int i=1;i<n-1;++i){
            if(rightmax[i+1]>A[i]){
                left.insert(A[i]);
                auto it=left.lower_bound(A[i]);
                --it;
                sum=max(sum,*it+A[i]+rightmax[i+1]);
            }
            
        }
       return sum;
}

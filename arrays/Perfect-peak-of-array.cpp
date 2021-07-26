int Solution::perfectPeak(vector<int> &A) {
   int n=A.size();
        vector<int> large(n),small(n);
        large[0]=A[0];
        small[n-1]=A[n-1];
        for(int i=1;i<n;i++){
            large[i]=max(large[i-1],A[i]);
        }
        for(int i=n-2;i>=0;i--){
            small[i]=min(small[i+1],A[i]);
        }
        for(int i=1;i<n-1;i++){
            if(A[i]>large[i-1] && A[i]<small[i+1]){
                return 1;
            }
        }
        return 0;
    }

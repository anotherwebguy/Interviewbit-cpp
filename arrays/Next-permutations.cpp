vector<int> Solution::nextPermutation(vector<int> &A) {
        int n=A.size();
        if(n<=1) return A;
        vector<int> res(n);
        for(int i=0;i<n;i++){
            res[i]=A[i];
        }
        int i=n-2;
        while(i>=0 && res[i]>=res[i+1]) i--;
        if(i>=0){
            int j=n-1;
            while(res[j]<=res[i]) j--;
            swap(res[i],res[j]);
        }
        i++;
        int j=n-1
        while(i<j){
            swap(res[i++],res[j--]);
        }
        return res;
        
    }

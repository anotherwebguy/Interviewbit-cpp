vector<int> Solution::subUnsort(vector<int> &A) {
   int n=A.size();
        int s=-1,e=-1;
        for(int i=0;i<n-1;i++){
            if(A[i]>A[i+1]){
                s=i;
                break;
            }
        }
        vector<int> ans;
        if(s==-1){
            ans.push_back(s);
            return ans;
            
        }
        cout<<s;
        for(int i=n-1;i>=0;i--){
            if(A[i-1]>A[i]){
                e=i;
                break;
            }
        }
        int minval=INT_MAX,maxval=INT_MIN;
        for(int i=s;i<=e;i++){
            minval=min(minval,A[i]);
            maxval=max(maxval,A[i]);
        }
        for(int i=0;i<s;i++){
            if(A[i]>minval){
                s=i;
                break;
            }
        }
        for(int i=n-1;i>=e+1;i--){
            if(A[i]<maxval){
                e=i;
                break;
            }
        }
        ans.push_back(s);
        ans.push_back(e);
        return ans;
    }

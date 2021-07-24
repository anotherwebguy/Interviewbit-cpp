vector<int> Solution::plusOne(vector<int> &A) {
        vector<int> ans;
        int count=0;
        for(int i=0;i<A.size();i++){
            if(A[i]==0){
                count++;
            }
        }
        if(count==A.size()){
            ans.push_back(1);
            return ans;
        }
        auto it=A.begin();
        while(*it==0){
            A.erase(it);
            it=A.begin();
        }
        int n=A.size();
        int carry=1,val=0;
        for(int i=n-1;i>=0;i--){
            val=(A[i]+carry)%10;
            ans.push_back(val);
            carry=(A[i]+carry)/10;
        }
        if(carry>0){
            ans.push_back(carry);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
}

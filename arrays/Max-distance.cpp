int Solution::maximumGap(const vector<int> &A) {
        int n=A.size();
        vector<pair<int,int>> res;
        for(int i=0;i<n;i++){
            res.push_back(make_pair(A[i],i));
        }
        sort(res.begin(),res.end());
        int back=res[n-1].second;
        int ans=0;
        for(int i=n-2;i>=0;i--){
            ans=max(ans,back-res[i].second);
            back=max(back,res[i].second);
        }
        return ans;
}

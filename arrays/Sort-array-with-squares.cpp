vector<int> Solution::solve(vector<int> &A) {
int n=A.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[abs(A[i])]++;
        }
        vector<int> ans;
        for(auto i :m){
            while(i.second--){
                ans.push_back((i.first)*(i.first));
            }
        }
        return ans;
}

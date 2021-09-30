vector<vector<int> > Solution::threeSum(vector<int> &A) {
    
    set<vector<int>> s;
    vector<vector<int>> ans;
    sort(A.begin(),A.end());
    
    long long int n=A.size(),i;
    
    for(i=0;i<n;i++)
    {
        long long int l=i+1;
        long long int r=n-1;
        
        while(l<r)
        {
            long long int sum=(long long int)A[i]+(long long int)A[l]+(long long int)A[r];
            
            if(sum==0)
            {
                s.insert({A[i],A[l],A[r]});
                l++;
                r--;
            }
            else if(sum>0)
            {
                r--;
            }
            else
            {
                l++;
            }
        }
    }
    
    for(auto it=s.begin();it!=s.end();it++)
    {
        ans.push_back(*it);
    }
    
    return ans;
}

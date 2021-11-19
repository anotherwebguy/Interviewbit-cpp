vector<vector<int> > Solution::fourSum(vector<int> &A, int B) 
{
    vector<vector<int>> ans;
    set<vector<int>> s;
    vector<int> v;
    unordered_map<int,vector<pair<int,int>>> m;
    int n=A.size();
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int sum=A[i]+A[j];
            m[sum].push_back(make_pair(i,j));
        }
    }
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            int target=B-(A[i]+A[j]);
            if(m.find(target)!=m.end())
            {
                for(auto val: m[target]){
                    if(val.first!=i && val.first!=j && val.second!=i && val.second!=j)
                    {
                        v.push_back(A[i]);
                        v.push_back(A[j]);
                        v.push_back(A[val.first]);
                        v.push_back(A[val.second]);
                        sort(v.begin(),v.end());
                        s.insert(v);
                        v.clear();
                    }
                }
            }
        }
    }
    for(auto val: s)
        ans.push_back(val);

    sort(ans.begin(),ans.end());
    return ans;

}

int Solution::solve(vector<vector<int> > &a) {
    vector<int> lis(a.size(),1);
    for(int i=1; i<a.size(); i++)
     for(int j=0; j<i; j++)
        if(a[i][0]>a[j][1]) lis[i]=max(lis[i],lis[j]+1);
    return *max_element(lis.begin(), lis.end());
}

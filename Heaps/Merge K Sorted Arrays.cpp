typedef pair<int, pair<int, int> > ppi;

vector<int> Solution::solve(vector<vector<int> > &A) {
    priority_queue<ppi,vector<ppi>,greater<ppi>> pq;
    for(int i=0;i<A.size();i++) pq.push({A[i][0],{i,0}});
    vector<int> ans;
    while(!pq.empty()){
        ppi x = pq.top();
        pq.pop();
        int i = x.second.first;
        int j = x.second.second;
        ans.push_back(x.first);
        if(j+1<A[i].size())
            pq.push({A[i][j+1],{i,j+1}});
    }
    return ans;
}

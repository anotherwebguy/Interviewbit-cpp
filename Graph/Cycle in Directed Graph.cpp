int checkCycle(int node,vector<int> adj[],int vis[],int dfsvis[]) {
    vis[node] = 1;
    dfsvis[node] = 1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(checkCycle(it,adj,vis,dfsvis)) return 1;
        } else if(dfsvis[it]) {
            return 1;
        }
    }
    dfsvis[node]=0;
    return 0;
}


int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> adj[A+1];
    for(int i=0;i<B.size();i++) {
        adj[B[i][0]].push_back(B[i][1]);
    }
    int vis[A+1],dfsvis[A+1];
    memset(vis,0,sizeof vis);
    memset(dfsvis,0,sizeof dfsvis);
    for(int i=1;i<=A;i++) {
        if(!vis[i]) {
            if(checkCycle(i,adj,vis,dfsvis)) {
                return 1;
            }
        }
    }
    return 0;
}

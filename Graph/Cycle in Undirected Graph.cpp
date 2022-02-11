int checkCycle(int node,int parent,vector<int> adj[],int vis[]){
    vis[node]=1;
    for(auto it:adj[node]) {
        if(!vis[it]){
            if(checkCycle(it,node,adj,vis)) return 1;
        } else if(it!=parent) return 1;
    }
    return 0;
}

int Solution::solve(int A, vector<vector<int> > &B) {
    vector<int> adj[A+1];
    for(int i=0;i<B.size();i++) {
        adj[B[i][0]].push_back(B[i][1]);
        adj[B[i][1]].push_back(B[i][0]);
    }
    int vis[A+1];
    memset(vis,0,sizeof vis);
    for(int i=1;i<=A;i++) {
        if(!vis[i]) {
            if(checkCycle(i,-1,adj,vis)) {
                return 1;
            }
        }
    }
    return 0;
}

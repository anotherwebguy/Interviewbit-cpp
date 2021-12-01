int Solution::solve(vector<int> &A, int B) {
    priority_queue<int> pq;
    for(int i=0;i<A.size();i++) pq.push(A[i]);
    int ans=0;
    while(B--){
        int x = pq.top();
        pq.pop();
        ans+=x;
        pq.push(--x);
    }
    return ans;
}

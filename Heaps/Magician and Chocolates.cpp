int Solution::nchoc(int A, vector<int> &B) {
    priority_queue<int> pq;
    for(int i=0;i<B.size();i++) pq.push(B[i]);
    int ans =0;
    while(A--) {
        int x = pq.top();
        pq.pop();
        ans+=x%1000000007;
        ans%=1000000007;
        pq.push(floor(x/2));
    }
    return ans%1000000007;
}

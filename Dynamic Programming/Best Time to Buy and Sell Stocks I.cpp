int Solution::maxProfit(const vector<int> &A) {
    int least=INT_MAX;
    int sell = 0;
    int ans = 0;
    for(int i=0;i<A.size();i++) {
        if(A[i]<least) least = A[i];
        sell = A[i]-least;
        ans = max(ans,sell);
    }
    return ans;
}

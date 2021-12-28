bool comparator(vector<int> a, vector<int> b){
    return a[1]<b[1];
}
int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end(),comparator);
    int cnt =1;
    int st=0;
    for(int i=1;i<A.size();i++){
        if(A[st][1]<A[i][0]){
            cnt++;
            st=i;
        }
    }
    return cnt;
}

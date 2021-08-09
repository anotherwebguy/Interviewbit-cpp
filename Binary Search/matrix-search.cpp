
int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n=A.size(),m=A[0].size();
    int l=0,h=A[0].size()-1;
    if(B<A[0][0] || B>A[n-1][m-1]) return 0;
    while(l<n && h>=0){
        if(A[l][h]>B) h--;
        else if(A[l][h]<B) l++;
        else return 1;
    }
    return 0;
}

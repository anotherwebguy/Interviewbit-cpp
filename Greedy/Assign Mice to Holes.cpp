int Solution::mice(vector<int> &A, vector<int> &B) {
    int m=-100,i;
    int n = A.size();
    sort(A.begin(),A.end());  sort(B.begin(),B.end());
    for(i=0;i<n;i++)
    {
            if(m<abs(A[i]-B[i]))
                m=abs(A[i]-B[i]);
    }
    
    return m;
}

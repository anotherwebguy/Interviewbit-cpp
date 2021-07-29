void Solution::setZeroes(vector<vector<int> > &A) {
        int n=A.size();
        int m=A[0].size();
        map<int,int> c,r;   
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(A[i][j]==0){
                    c[j]=1;
                    r[i]=1;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(c[j]==1 || r[i]==1){
                    A[i][j]=0;
                }
            }
        }
}

int Solution::solve(int n, int k) {
    long long eggFloor[n + 1][k + 1];
    memset(eggFloor,0,sizeof(eggFloor));
    int res;
    int i, j, x;
    for(long long i=1;i<=n;i++) {
        for(long long j=1;j<=k;j++) {
            if(i==1) eggFloor[i][j]=j;
            else if(j==1) eggFloor[i][j]=1;
            else {
                int minval = INT_MAX;
                for(int a=j-1,b=0;a>=0;a--,b++) {
                    int v1 = eggFloor[i][a];
                    int v2 = eggFloor[i-1][b];
                    int val = max(v1,v2);
                    minval = min(minval,val);
                }
                eggFloor[i][j] = minval+1;
            }
        }
    }
    
    return eggFloor[n][k];
}

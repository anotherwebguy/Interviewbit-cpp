#define mod 1000000007
int Solution::cntBits(vector<int> &A) {
    
    long long int s=0,c=0,i,j;
    long long int n = A.size();
    for(i=0;i<31;i++)
    {
        c=0;
        for(j=0;j<A.size();j++)
        {
                if( A[j] & (1<<i) ) c++;
        }
        s+=(c*(n-c)*2);
    }
    s=s%mod;
    s = (int) s ;
    return s%mod;

}

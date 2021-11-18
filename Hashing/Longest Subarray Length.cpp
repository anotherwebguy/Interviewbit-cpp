int Solution::solve(vector<int> &A) {
    unordered_map<int,int> m;
    for(int i=0;i<A.size();i++){
        (A[i]==0)?A[i]=-1:A[i]=1;
    }
    int sum=0,max_len=0;
    for(int i=0;i<A.size();i++) {
        sum+=A[i];
        if(sum==1){
            max_len=i+1;
        } else if(m.find(sum)==m.end()){
            m[sum]=i;
        }
        if(m.find(sum-1)!=m.end()){
            if(max_len<(i-m[sum-1])){
                max_len=i-m[sum-1];
            }
        }
    }
    return max_len;
}

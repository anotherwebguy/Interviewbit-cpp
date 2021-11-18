vector<int> Solution::lszero(vector<int> &A) {
    unordered_map<int,int> m;
    int sum=0,start=0,end=0;
    int max_len=0,f=0;
    for(int i=0;i<A.size();i++) {
        sum+=A[i];
        if(A[i]==0 && end==0) {
            start=i;
            end=i;
            f=1;
            max_len=1;
        }
        if(sum==0) {
            start=0;
            end=i;
            max_len=i+1;
        }
        if(m.find(sum)!=m.end()){
            if((i-m[sum])>max_len){
                max_len=i-m[sum];
                start=m[sum]+1;
                end=i;
            }
        } else {
            m[sum]=i;
        }
    }
    if(end==0 && f==0) return {};
    vector<int> ans;
    for(int i=start;i<=end;i++){
        ans.push_back(A[i]);
    }
    return ans;
}

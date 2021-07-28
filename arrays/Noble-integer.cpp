int Solution::solve(vector<int> &A) {
 int n=A.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[A[i]]++;
        }
        int c=0,count=0;
        for(auto i:m){
            c+=i.second;
            if(i.first==n-c){
                count+=1;
            }
        }
        if(count==0){
            return -1;
        }
        return count;
}

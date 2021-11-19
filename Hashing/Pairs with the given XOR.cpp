int Solution::solve(vector<int> &A, int B) {
    unordered_map<int,int> mp;
    int cur;
    int x = 0;
    for(int i=0;i<A.size();i++){
        cur  = A[i];
        if(mp.find(B^cur)!=mp.end()){
            x++;
        }
        mp.insert({A[i],i});}
   return x;
}

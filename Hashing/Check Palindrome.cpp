int Solution::solve(string A) {
    unordered_map<char,int> m;
    for(int i=0;i<A.size();i++){
        m[A[i]]++;
    }
    int odd=0;
    for(auto i:m){
        if(i.second%2) odd++;
    }
    if(odd>1) return 0;
    return 1;
}

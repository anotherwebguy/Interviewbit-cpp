vector<int> Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    map<int, set<int>> mp;
    
    for(int i = 0 ; i < A.size() ; i++){
        mp[A[i]].insert(1);
    }
    
    for(int i = 0 ; i < A.size() ; i++){
        mp[B[i]].insert(2);
    }
    
    for(int i = 0 ; i < A.size() ; i++){
        mp[C[i]].insert(3);
    }
    vector<int> ans;
    
    for(auto it = mp.begin() ; it!=mp.end() ; it++){
        if(it->second.size()>=2){ans.push_back(it->first);}
    }
    return ans;
}

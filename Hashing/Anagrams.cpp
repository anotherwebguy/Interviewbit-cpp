vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    map<string,vector<int>> m;
    for(int i=0;i<A.size();i++) {
        string s=A[i];
        sort(s.begin(),s.end());
        m[s].push_back(i+1);
    }
    vector<vector<int>> res(m.size());
    int idx=0;
    for(auto x : m){
        auto v = x.second;
        for(int i=0;i<v.size();i++){
            res[idx].push_back(v[i]);
        }
        idx++;
    }
    return res;
}

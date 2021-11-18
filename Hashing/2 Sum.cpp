vector<int> Solution::twoSum(const vector<int> &A, int B) {
    vector<int> result;
    unordered_map<int,int> mp;
    for(int i=0;i<A.size();i++){
        if(mp.find(A[i]) == mp.end()){
            if(mp.find(B-A[i]) == mp.end())mp[B-A[i]] = i;
        } 
        
        else{
            result.push_back(mp[A[i]] + 1);
            result.push_back(i + 1);
            return result;
        }
    }
    return result;
}

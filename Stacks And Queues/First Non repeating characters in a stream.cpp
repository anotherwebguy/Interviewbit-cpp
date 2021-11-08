string Solution::solve(string A) {
    int freq[26]={0};
    string ans="";
    vector<char> v;
    for(int i=0;i<A.size();i++){
        if(!freq[A[i]-'a']){
            v.push_back(A[i]);
        }
        freq[A[i]-'a']++;
        int f=0;
        int m=v.size();
        for(int j=0;j<m;j++){
            if(freq[v[j]-'a']==1){
                ans+=v[j];
                f=1;
                break;
            }
            
        }
        if(f==0) ans+="#";
        
    }
    return ans;
}

string Solution::solve(string A) {
    stringstream s(A);
    string word;
    vector<string> ans;
    while(s>>word) {
        ans.push_back(word);
    }
    string res="";
    for(int i=ans.size()-1;i>=0;i--){
        res+=ans[i];
        if(i!=0) res+=" ";
    }
    return res;
}

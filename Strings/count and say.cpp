string Solution::countAndSay(int A) {
    A--;
    vector<string> v;
    v.push_back("1");v.push_back("11");v.push_back("21");
    for(int j = 3;j<=A;j++){
        string s = v[j-1];
        string ans;
        int cnt = 1 ,i;
        for(i = 1;i<s.size();i++){
            if(s[i]==s[i-1])cnt++;
            else{
                ans += to_string(cnt);
                ans += s[i - 1];
                cnt = 1;
            }
        }
        ans += to_string(cnt);
        ans += s[i - 1];
        v.push_back(ans);
    }
    return v[A];
}

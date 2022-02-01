unordered_set<string> dict;
vector<bool> dp;
int Solution::wordBreak(string A, vector<string> &B) {
    dict.clear();
    dp.clear();
    dp.resize(A.size() + 1, 0);
    for (auto it : B) dict.insert(it);
    dp[A.size()] = 1;
    for (int i = A.size() - 1; i >= 0; i--) {
        string tmp = "";
        for (int j = i; j < A.size(); j++) {
            if (dp[i]) break;
            tmp += A[j];
            if (dict.find(tmp) != dict.end()) {
                dp[i] = dp[j + 1];
            }
        }
    }
    if (dp[0])
        return 1;
    return 0;
}

int ispalindrome(vector<char> A){
   int flag = true;
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    string s1 = "";
    for(int i = 0; i<A.size(); i++){
        if(isalnum(A[i])) s1.push_back(A[i]);
    }
    int N = s1.length()-1;
    for(int j = 0; j<=N/2; j++){
        if(s1[j]!=s1[N-j]){
            flag = false;
            break;
        }
    }
    return flag;
}

bool ispalindrome(string str) {
    int l=0,h=str.length()-1;
    while(l<h) {
        if(str[l]!=str[h]) return false;
        l++;
        h--;
    }
    return true;
}

void backtrack(string str,vector<vector<string>> &res, vector<string> &curr) {
    if(str.length()==0) {
        res.push_back(curr);
        return;
    }
    for(int i=0;i<str.length();i++){
        string sub = str.substr(0,i+1);
        string rem = str.substr(i+1,str.length());
        if(ispalindrome(sub)){
            curr.push_back(sub);
            backtrack(rem,res,curr);
            curr.pop_back();
        }
    }
}

vector<vector<string> > Solution::partition(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<string>> res;
    vector<string> curr;
    backtrack(A,res,curr);
    return res;
}

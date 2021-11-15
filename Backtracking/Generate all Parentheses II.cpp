void backtracking(int n, int open, int close, string str, vector<string>& res)
{
    if (close == n)
    {
        res.emplace_back(str);
        return;
    }
    else
    {
        if (open < n)
        { 
            str += '(';
            backtracking(n, open+1, close, str, res);
            str.pop_back();
        }
        if (open > close)
        {
            str += ')';
            backtracking(n, open, close+1, str, res);
            str.pop_back();
        }
    }
}

vector<string> Solution::generateParenthesis(int A) {
    vector<string> res;
    backtracking(A,0,0,"",res);
    return res;
}

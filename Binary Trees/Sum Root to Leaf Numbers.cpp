/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void summ(TreeNode* A, string s, vector<string> &res){
    if(!A) return;
    s+=to_string(A->val);
    s=to_string(stoi(s)%1003);
    summ(A->left,s,res);
    summ(A->right,s,res);
    if(!A->left && !A->right) res.push_back(s);
} 
int Solution::sumNumbers(TreeNode* A) {
    vector<string> res;
    string s = "";
    summ(A,s,res);
    int ans=0;
    for(int i=0;i<res.size();i++){
        ans+=stoi(res[i])%1003;
    }
    return ans%1003;
}

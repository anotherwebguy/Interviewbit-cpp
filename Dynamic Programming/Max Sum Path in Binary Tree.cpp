/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

int solve(TreeNode* A, int &res) {
    if(A==NULL) return 0;
    int left = solve(A->left,res);
    int right = solve(A->right,res);
    int temp = max(max(left,right)+A->val,A->val);
    int ans = max(temp,left+right+A->val);
    res = max(res,ans);
    return temp;
} 
int Solution::maxPathSum(TreeNode* A) {
    int res = INT_MIN;
    int x = solve(A,res);
    return res;
}

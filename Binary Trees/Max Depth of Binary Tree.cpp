/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {
    if(!A) return 0;
    int l = maxDepth(A->left);
    int r = maxDepth(A->right);
    return 1+max(l,r);
}

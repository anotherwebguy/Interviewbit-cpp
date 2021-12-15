/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* merge(TreeNode* A, TreeNode* B){
    if(!A) return B;
    if(!B) return A;
    A->val+=B->val;
    A->left = merge(A->left,B->left);
    A->right = merge(A->right,B->right);
    return A;
} 

TreeNode* Solution::solve(TreeNode* A, TreeNode* B) {
    TreeNode* C = merge(A,B);
    return C;
}


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* A) {
    if(!A) return NULL;
    A->left = solve(A->left);
    A->right = solve(A->right);
    if(!A->left && !A->right) return A;
    if(!A->left){
        TreeNode* node = A->right;
        free(A);
        return node;
    }
    if(!A->right){
        TreeNode* node = A->left;
        free(A);
        return node;
    }
    return A;
}

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool isMirror(TreeNode* root1, TreeNode* root2) {
    if(!root1 && !root2) return true;
    if(root1 && root2 && root1->val==root2->val){
        return isMirror(root1->left,root2->right) && isMirror(root1->right,root2->left);
    }
    return false;
} 
int Solution::isSymmetric(TreeNode* A) {
    return isMirror(A,A);
}

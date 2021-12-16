/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool isSame(TreeNode* A,TreeNode* B){
    if(!A && !B) return true;
    if(A && B && A->val==B->val){
        return isSame(A->left,B->left) && isSame(A->right,B->right);
    }
    return false;
} 
int Solution::isSameTree(TreeNode* A, TreeNode* B) {
    return isSame(A,B);
}

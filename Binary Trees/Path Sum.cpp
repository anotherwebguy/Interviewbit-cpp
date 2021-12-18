/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int flag; 
void hasPath(TreeNode* A, int B) {
    if(!A->left && !A->right){
        if(B-A->val==0) {
            flag=1;
            return;
        }
    }
    if(A->left) hasPath(A->left,B-A->val);
    if(A->right) hasPath(A->right,B-A->val);
} 

int Solution::hasPathSum(TreeNode* A, int B) {
    flag=0;
    hasPath(A,B);
    return flag;
}

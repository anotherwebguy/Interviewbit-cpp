/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int solve(TreeNode* A){
    if(!A) return 0;
    int l = solve(A->left);
    int r = solve(A->right);
    if(l==-1 || r==-1) return 0;
    if(abs(l-r)>1) return -1;
    return 1+max(l,r);
}

int Solution::isBalanced(TreeNode* A) {
    int x = solve(A);
    if(x==-1) return 0;
    return 1;
}

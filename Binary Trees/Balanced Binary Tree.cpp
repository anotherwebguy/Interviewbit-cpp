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
    int l,r;
    if(!A) return 0;
    l = solve(A->left);
    if(l==-1) return -1;
    r = solve(A->right);
    if(r==-1) return -1;
    if(abs(l-r)>1) return -1;
    return 1+max(l,r);
}

int Solution::isBalanced(TreeNode* A) {
    int x = solve(A);
    if(x==-1) return 0;
    return 1;
}

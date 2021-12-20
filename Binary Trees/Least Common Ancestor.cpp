/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool find(TreeNode* root, int val)
{
    if (!root)
        return false;
    if (root->val == val)
        return true;
    if ((root->left && find(root->left, val)) || 
        (root->right && find(root->right, val)))
        return true;
    return false;
}

TreeNode* findlca(TreeNode*A, int B, int C) {
    if(!A) return NULL;
    if(A->val==B || A->val==C) return A;
    TreeNode* left = findlca(A->left,B,C);
    TreeNode* right = findlca(A->right,B,C);
    if(!left) return right;
    else if(!right) return left;
    else return A;
}

int Solution::lca(TreeNode* A, int B, int C) {
    if(!find(A,B) || !find(A,C)) return -1;
    TreeNode* temp = findlca(A,B,C);
    return temp->val;
}

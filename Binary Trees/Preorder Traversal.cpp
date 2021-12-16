/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void preorder(TreeNode* A, vector<int> &res){
    if(!A) return;
    res.push_back(A->val);
    preorder(A->left,res);
    preorder(A->right,res);
} 
vector<int> Solution::preorderTraversal(TreeNode* A) {
    vector<int> res;
    preorder(A,res);
    return res;
}

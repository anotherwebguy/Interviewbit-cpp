/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorder(TreeNode* A, vector<int> &res){
    if(!A) return;
    postorder(A->left,res);
    postorder(A->right,res);
    res.push_back(A->val);
} 

vector<int> Solution::postorderTraversal(TreeNode* A) {
    vector<int> res;
    postorder(A,res);
    return res;
}

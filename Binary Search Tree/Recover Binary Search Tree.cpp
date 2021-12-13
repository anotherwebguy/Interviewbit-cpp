/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void findInorder(TreeNode* A, vector<int> &inorder){
    if(!A) return;
    findInorder(A->left,inorder);
    inorder.push_back(A->val);
    findInorder(A->right,inorder);
} 

vector<int> Solution::recoverTree(TreeNode* A) {
    vector<int> inorder,soln;
    findInorder(A,inorder);
    vector<int> temp = inorder;
    sort(temp.begin(),temp.end());
    for(int i=0;i<inorder.size();i++){
        if(temp[i]!=inorder[i]) soln.push_back(temp[i]);
    }
    return soln;
}

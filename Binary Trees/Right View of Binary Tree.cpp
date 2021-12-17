/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void rightView(TreeNode* A,int level, vector<int> &res){
    if(!A) return;
    if(level==res.size()) res.push_back(A->val);
    rightView(A->right,level+1,res);
    rightView(A->left,level+1,res);
} 

vector<int> Solution::solve(TreeNode* A) {
    vector<int> res;
    rightView(A,0,res);
    return res;
}

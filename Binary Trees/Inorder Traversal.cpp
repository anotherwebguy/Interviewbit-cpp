/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* A,vector<int> &res) {
    stack<TreeNode*> s;
    TreeNode* curr=A;
    while(true){
        if(curr){
            s.push(curr);
            curr=curr->left;
        } else {
            if(s.empty()) break;
            curr = s.top();
            s.pop();
            res.push_back(curr->val);
            curr=curr->right;
        }
    }
}
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> res;
    inorder(A,res);
    return res;
}

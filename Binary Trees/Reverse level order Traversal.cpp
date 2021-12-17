/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::solve(TreeNode* A) {
    vector<int> ans;
    if(!A) return ans;
    queue<TreeNode*> q;
    q.push(A);
    while(!q.empty()){
        TreeNode* temp = q.front();
        //q.pop();
        ans.push_back(temp->val);
        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
        q.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

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
    queue<TreeNode*> q;
    vector<int> ans;
    q.push(A);
    while(!q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        while(temp){
            if(temp->left) q.push(temp->left);
            ans.push_back(temp->val);
            temp=temp->right;
        }
    }
    return ans;
}

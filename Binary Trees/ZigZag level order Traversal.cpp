/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    if(!A) return ans;
    q.push(A);
    bool ltr = true;
    while(!q.empty()){
        int s = q.size();
        vector<int> level(s);
        for(int i=0;i<s;i++){
            TreeNode* temp = q.front();
            q.pop();
            int ind = ltr ? i : (s-i-1);
            level[ind] = temp->val;
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        ltr = !ltr;
        ans.push_back(level);
    }
    return ans;
}

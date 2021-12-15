/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

TreeNode* findTarget(TreeNode* root, int B){
    if(!root) return NULL;
    if(root->val == B) return root;
    TreeNode* temp = findTarget(root->left,B);
    if(temp!=NULL) return temp;
    TreeNode* temp2 = findTarget(root->right,B);
    if(temp2!=NULL) return temp2;
}

void markParents(TreeNode* root,unordered_map<TreeNode*,TreeNode*> &parents,TreeNode* target){
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        if(curr->left) {
            parents[curr->left] = curr;
            q.push(curr->left);
        }
        if(curr->right){
            parents[curr->right] = curr;
            q.push(curr->right);
        }
    }
}

vector<int> Solution::distanceK(TreeNode* A, int B, int C) {
    TreeNode* target = findTarget(A,B);
    unordered_map<TreeNode*, TreeNode*> parents;
    markParents(A,parents,target);
    unordered_map<TreeNode*, bool> visited;
    queue<TreeNode*> q;
    q.push(target);
    visited[target] = true;
    int curr_level = 0;
    while(!q.empty()) {
        int size = q.size();
        if(curr_level++ == C) break;
        for(int i=0;i<size;i++){
            TreeNode* curr = q.front();
            q.pop();
            if(curr->left && !visited[curr->left]){
                q.push(curr->left);
                visited[curr->left] = true;
            }
            if(curr->right && !visited[curr->right]){
                q.push(curr->right);
                visited[curr->right] = true;
            }
            if(parents[curr] && !visited[parents[curr]]){
                q.push(parents[curr]);
                visited[parents[curr]] = true;
            }
        }
    }
    vector<int> res;
    while(!q.empty()){
        TreeNode* curr = q.front();
        q.pop();
        res.push_back(curr->val);
    }
    return res;
}


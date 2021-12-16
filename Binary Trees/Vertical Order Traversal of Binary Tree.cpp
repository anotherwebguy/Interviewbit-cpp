/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    map<int,map<int,multiset<int>>> nodes;
    queue<pair<TreeNode*,pair<int,int>>> todo;
    todo.push({A,{0,0}});
    while(!todo.empty()){
        auto p = todo.front();
        todo.pop();
        TreeNode* node = p.first;
        int x = p.second.first, y = p.second.second;
        nodes[x][y].insert(node->val);
        if(node->left){
            todo.push({node->left,{x-1,y+1}});
        }
        if(node->right){
            todo.push({node->right,{x+1,y+1}});
        }
    }
    vector<vector<int>> res;
    for(auto p:nodes){
        vector<int> col;
        for(auto q : p.second){
            col.insert(col.end(),q.second.begin(),q.second.end());
        }
        res.push_back(col);
    }
    return res;
}


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* buildBT(vector<int> &A,int prestart,int preend,vector<int> &B,int instart, int inend,map<int,int> &m){
    if(prestart > preend || instart > inend) return NULL;
    TreeNode* root = new TreeNode(A[prestart]);
    int inroot = m[root->val];
    int numsleft = inroot-instart;
    root->left = buildBT(A,prestart+1,prestart+numsleft,B,instart,inroot-1,m);
    root->right = buildBT(A,prestart+numsleft+1,preend,B,inroot+1,inend,m);
    return root;
} 

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    map<int,int> m;
    for(int i=0;i<A.size();i++) m[B[i]]=i;
    TreeNode* root = buildBT(A,0,A.size()-1,B,0,B.size()-1,m);
    return root;
}

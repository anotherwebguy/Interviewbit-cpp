/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* buildBT(vector<int> &A,int instart,int inend,vector<int> &B,int poststart, int postend){
    if(instart > inend || poststart > postend) return NULL;
    TreeNode* root = new TreeNode(B[postend]);
    int inroot = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]==root->val){
            inroot=i;
            break;
        }
    }
    root->left = buildBT(A,instart,inroot-1,B,poststart,poststart+inroot-instart-1);
    root->right = buildBT(A,inroot+1,inend,B,poststart+inroot-instart,postend-1);
    return root;
} 

TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    return buildBT(A,0,A.size()-1,B,0,B.size()-1);
}

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int ans; 
void depth(TreeNode* A, int curr){
    if(!A->left && !A->right){
        ans = min(ans,curr);
        return;
    }
    if(A->left) depth(A->left,curr+1);
    if(A->right) depth(A->right,curr+1);
} 
int Solution::minDepth(TreeNode* A) {
    ans = INT_MAX;
    depth(A,1);
    return ans;
}

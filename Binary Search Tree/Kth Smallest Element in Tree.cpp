/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::kthsmallest(TreeNode* A, int B) {
    stack<TreeNode*> s;
    int c=0;
    while(true){
        if(A!=NULL){
            s.push(A);
            A=A->left;
        } else {
            if(s.empty()) break;
            A = s.top();
            s.pop();
            c++;
            if(c==B) return A->val;
            A=A->right;
        }
    }
    return -1;
}

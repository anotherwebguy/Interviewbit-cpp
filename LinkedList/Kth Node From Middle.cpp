/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    int count=0;
    ListNode *curr=A;
    while(curr!=NULL){
        curr=curr->next;
        count++;
    }
    int m=count/2 + 1;
    curr=A;
    if(B>=m) return -1;
    for( int i=0;i<m-B-1;i++){
        curr=curr->next;
    }
    return curr->val;
}

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    int count0=0,count1=0;
    ListNode *curr=A;
    while(curr!=NULL){
        if(curr->val==0) count0++;
        else count1++;
        curr=curr->next;
    }
    ListNode *temp = A;
    while(count0--){
        temp->val=0;
        temp=temp->next;

    }
    while(count1--){
        temp->val=1;
        temp=temp->next;

    }
    return A;
}

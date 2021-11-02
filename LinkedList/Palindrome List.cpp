/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode *reverse(ListNode *head){
    ListNode *curr=head,*prev=NULL,*next;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
} 

int Solution::lPalin(ListNode* A) {
    ListNode *slow=A, *fast=A, *sp=A, *sl;
    ListNode *middle;
    if(A==NULL || A->next==NULL) return 1;
    while(fast!=NULL && fast->next!=NULL) {
        fast=fast->next->next;
        sp=slow;
        slow=slow->next;
    }
    if(fast!=NULL){
        middle=slow;
        slow=slow->next;
    }
    sp->next=NULL;
    sl=slow;
    sl=reverse(sl);
    while(A && sl){
        if(A->val==sl->val){
            A=A->next;
            sl=sl->next;
        } else {
            return 0;
        }
    }
    return 1;
}

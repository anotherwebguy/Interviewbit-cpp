/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *slow=A,*sp=A, *fast=A;
    for(int i=0;i<B;i++){
        if(fast->next==NULL) return A->next;
        fast=fast->next;
    }
    while(fast!=NULL){
        fast=fast->next;
        sp=slow;
        slow=slow->next;
    }
    sp->next=slow->next;
    delete slow;
    return A;
}

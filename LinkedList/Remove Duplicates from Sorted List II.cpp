/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *curr=A;
    ListNode *res = new ListNode(-1);
    res->next  = A;
    ListNode *prev = res;
    while(curr!=NULL){
        while(curr->next!=NULL && prev->next->val==curr->next->val){
            curr=curr->next;
        }
        if(prev->next==curr) prev=prev->next;
        else prev->next=curr->next;
        curr=curr->next;
    }
    return res->next;
}

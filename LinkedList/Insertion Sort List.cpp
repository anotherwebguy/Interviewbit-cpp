/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* sortedList(ListNode *head,ListNode* curr){
    if(head==NULL || curr->val<=head->val){
        curr->next=head;
        head=curr;
    } else {
        ListNode *temp=head;
        while(temp->next!=NULL && temp->next->val<curr->val){
            temp=temp->next;
        }
        curr->next=temp->next;
        temp->next=curr;
    }
    return head;
}
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode *sorted=NULL;
    ListNode *curr=A;
    ListNode *head_ref=NULL;
    while(curr!=NULL){
        ListNode *next = curr->next;
        head_ref = sortedList(head_ref,curr);
        curr=next;
    }
    return head_ref;
}

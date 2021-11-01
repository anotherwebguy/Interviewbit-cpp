/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* A, int B) {
    ListNode *small=new ListNode(-1),*large = new ListNode(-1);
    ListNode *sp=small,*lp=large;
    ListNode *curr=A;
    ListNode *pivot;
    while(curr!=NULL){
        if(curr->val<B){
            sp->next=curr;
            sp=sp->next;
        } else if(curr->val>=B) {
            lp->next=curr;
            lp=lp->next;
        } 
        curr=curr->next;
    }
    sp->next=large->next;
    lp->next=NULL;
    return small->next;
}

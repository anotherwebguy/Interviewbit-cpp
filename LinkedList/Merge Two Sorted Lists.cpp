/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *res=new ListNode(-1);
    ListNode *ans=res;
    while(A!=NULL && B!=NULL){
        if(A->val<B->val){
            res->next=A;
            res=res->next;
            A=A->next;
        } else {
            res->next=B;
            res=res->next;
            B=B->next;
        }
    }
    if(A){
        res->next=A;
        res=res->next;
    }
    if(B){
        res->next=B;
        res=res->next;
    }
    return ans->next;
}

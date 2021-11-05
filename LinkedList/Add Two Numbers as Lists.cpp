/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    A=reverse(A);
    B=reverse(B);
    int carry=0;
    ListNode *ans;
    while(A && B){
        ans->val=(A->val+B->val+carry)/10;
        carry=(A->val+B->val)%10;
        ans=ans->next;
   }
   ans->next=NULL;
   ans=reverse(ans);
   return ans;
}

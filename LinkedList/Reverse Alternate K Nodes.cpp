/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode *rev(ListNode *head,int y, bool r)
 {
    if(!head) return head;
    if(r)
    {
        ListNode *curr = head,*prev=NULL,*next=NULL;
        int x = y;
        while(curr && x--)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        head->next = rev(curr,y,!r);
        return prev;
     }
     else
     {
        ListNode *curr = head,*prev = NULL;
        int x = y;
        while(x-- && curr)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = rev(curr,y,!r);
        return head;
        
     }
   return NULL;
 }
ListNode* Solution::solve(ListNode* head, int y) {
   bool r = 1;
   if(y <= 1 || !head) return head;
   return rev(head,y,r);
}


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */



ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode *curr = A;
        int n = 1;
        while(curr->next){
            curr = curr->next;
            n++;
        }
        curr->next = A;
        if(B > n) B = B%n;
        
        for(int i = 0; i < n-B; i++)
            curr= curr->next;
        
        ListNode *ans = curr->next;
        curr->next = NULL;
        return ans;
}

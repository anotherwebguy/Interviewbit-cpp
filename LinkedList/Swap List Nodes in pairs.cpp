/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if( A ==NULL) return NULL;
    ListNode *curr = A->next;
    ListNode *prev= A;
    if( curr ==NULL ) return A;
    while( curr->next && curr->next->next){
        swap( curr->val, prev->val);
        ListNode *temp= curr->next ;
        prev= temp;
        curr= prev->next;

    }
    if( curr && prev ) swap(curr->val, prev->val );
    return A;
}

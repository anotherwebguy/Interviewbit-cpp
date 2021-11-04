/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    if( A==NULL) return A;

    if( A->next ==NULL) return A;

    struct ListNode *first , *last , *prev, *curr ;

    curr = A;

    int n = 1 ;

    prev= NULL ;

    while ( n< B){

        prev= curr ;

        curr= curr->next;

        n++;

    }

    last = NULL;

    if( curr ) first = curr;

    for ( int i =1 ; i<= C-B+1 && curr!= NULL ; i++) {

        struct ListNode *temp = curr->next ;

        curr->next = last;

        last= curr ;

        curr = temp;

    }

    if( prev) prev->next = last ;

    first->next = curr;

    if( first ==A) A= last;

    return A;
}

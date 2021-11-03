/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


ListNode* Solution::solve(ListNode* A) {
    if(A==NULL || A->next==NULL || A->next->next==NULL || A->next->next->next==NULL)
    {
        return A;
    }
    stack< int >v;
    int c=1;
    ListNode *tmp=A;
    while(tmp)
    {
        if(c%2==0)
        {
            v.push(tmp->val);
        }
        c++;
        tmp=tmp->next;
    }
    tmp=A;
    c=1;
    while(tmp && !v.empty())
    {
        if(c%2==0)
        {
            tmp->val=v.top();
            v.pop();
        }
        tmp=tmp->next;
        c++;
    }
    return A;
}

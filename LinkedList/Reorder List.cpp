/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reorderList(ListNode* A) {
    ListNode *curr=A;
    vector<ListNode*> v;
    int l,i;
     
    while(curr!=NULL)
    {
        v.push_back(curr);
        curr=curr->next;
    }
    l=v.size();
    curr=A;
     
    for(i=0;i<l/2;i++)
    {
        if(i!=0)
        {
            curr->next=v[i];
            curr=curr->next;
        }
        curr->next=v[l-i-1];
        curr=curr->next;
    }
     
    if(l%2==1)
    {
        curr->next=v[i];
        curr=curr->next;
    }
    curr->next=NULL;
    return A;
}

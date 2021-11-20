/**
 * Definition for singly-linked list.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
RandomListNode* Solution::copyRandomList(RandomListNode* A) {
    unordered_map<RandomListNode*, RandomListNode*> m;
    RandomListNode *original = A;
    RandomListNode *clone = NULL;
    while(original!=NULL){
        clone = new RandomListNode(original->label);
        m[original]=clone;
        original=original->next;
    }
    original=A;
    while(original!=NULL){
        clone = m[original];
        clone->next = m[original->next];
        clone->random = m[original->random];
        original=original->next;
    }
    return m[A];
}

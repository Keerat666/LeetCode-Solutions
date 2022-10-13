/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *q=NULL,*r=NULL;
    while(head)
    {
        r=q;
        q=head;
        head=head->next;
        q->next=r;
    }
    head=q;
    return head;

}

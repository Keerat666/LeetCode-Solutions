/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL && list2 == NULL)
        {
            return list1;
        }
        else if (list1 == NULL && list2 != NULL)
        {
            return list2;
        }
        else if (list1 != NULL && list2 == NULL)
        {
            return list1;
        }

        ListNode *list3, *last;

        if (list1->val < list2->val)
        {
            list3 = last = list1;
            list1 = list1->next;
            last->next = NULL;
        }
        else
        {
            list3 = last = list2;
            list2 = list2->next;
            last->next = NULL;
        }

        while (list1 && list2)
        {
            if (list1->val < list2->val)
            {
                last->next = list1;
                list1 = list1->next;
                last = last->next;
                last->next = NULL;
            }
            else
            {
                last->next = list2;
                list2 = list2->next;
                last = last->next;
                last->next = NULL;
            }
        }

        if (list1 != NULL && list2 == NULL)
        {
            last->next = list1;
        }
        else
        {
            last->next = list2;
        }

        return list3;
    }
};
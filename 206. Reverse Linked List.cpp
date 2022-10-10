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
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
               if (head == nullptr || head->next == nullptr) {
    return head;
  }

  ListNode* list_to_do = head->next;

  ListNode* reversed_list = head;
  reversed_list->next = nullptr;

  while (list_to_do != nullptr) {
    ListNode* temp = list_to_do;
    list_to_do = list_to_do->next;

    temp->next = reversed_list;
    reversed_list = temp;
  }

  return reversed_list;
    }
};

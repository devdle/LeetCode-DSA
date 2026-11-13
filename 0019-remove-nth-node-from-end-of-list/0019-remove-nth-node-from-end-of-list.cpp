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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode dummyNode(0);
        dummyNode.next = head;

        ListNode* slow = &dummyNode;
        ListNode* fast = &dummyNode;

        while(n >= 0 && fast != nullptr) {
            fast = fast->next;
            n--;
        }

        while(fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        slow->next = slow->next->next;

        return dummyNode.next;
    }
};

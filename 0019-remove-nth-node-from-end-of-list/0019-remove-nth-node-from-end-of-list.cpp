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

        // Move fast n + 1 steps
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }

        // Move both pointers together
        while (fast != nullptr) {
            fast = fast->next;
            slow = slow->next;
        }

        // Remove the target node
        slow->next = slow->next->next;

        return dummyNode.next;
    }
};

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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* current1 = list1;
        ListNode* current2 = list2;
        ListNode* nextNode1 = nullptr;
        ListNode* nextNode2 = nullptr;

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while(current1 != nullptr && current2 != nullptr){
            nextNode1 = current1->next;
            nextNode2 = current2->next;
            if(current1->val >= current2->val){
                tail->next = current2;
                tail = current2;
                current2 = nextNode2;
            }else {
                tail->next = current1;
                tail = current1;
                current1 = nextNode1;
            }
        }
        if(current1==nullptr) tail->next = current2;
        else if(current2==nullptr) tail->next = current1;
        return dummy.next;
    }
    
};
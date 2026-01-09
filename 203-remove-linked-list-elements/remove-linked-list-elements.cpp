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
    ListNode* removeElements(ListNode* head, int val) {
         ListNode dummy(0);
    ListNode* tail = &dummy;

    while (head) {
        if (head->val == val) {
            ListNode* del = head;
            head = head->next;
            // 若是 LeetCode 可不写 delete；自建链表建议释放
            delete del;
        } else {
            tail->next = head;
            tail = head;
            head = head->next;
        }
    }
    tail->next = nullptr;
    return dummy.next;
    }
};
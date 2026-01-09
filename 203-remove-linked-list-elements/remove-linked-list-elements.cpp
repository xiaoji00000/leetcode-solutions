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
        //创建虚拟头节点
        //遍历原来的链表，如果是val就跳过
        ListNode dummy(0);
        ListNode* tail=&dummy;
        while(head){
            if(head->val==val){
                
            }
            else{
                tail->next=head;
                tail=tail->next;
            }
            head=head->next;
        }
        tail->next=nullptr;
        return dummy.next;
    }
};
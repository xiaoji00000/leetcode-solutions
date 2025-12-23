/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //创建快慢指针，快指针每次走两步，满指针每次走一步，
        if((head==nullptr)||(head->next==nullptr))return false;
        ListNode*fast=head->next;
        ListNode*slow=head;
        //while循环
            //判断快慢指针是否重合
            //快慢指针分别移动
        while((fast!=nullptr)&&(fast->next!=nullptr)){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)return true;
        }
        return false;
        //返回结果
    }
};
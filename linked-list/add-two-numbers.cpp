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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode * ans = new ListNode();
        ListNode * itr = ans;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int a = l1 ? l1->val:0;
            if(l1) l1=l1->next;
            int b = l2 ? l2->val:0;
            if(l2) l2=l2->next;
            ans->next = new ListNode((a+b+carry)%10);
            ans = ans->next;
            carry = (a+b+carry)/10;
        }
        return itr->next;
        
    }
};
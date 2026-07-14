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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* i1 = headA, *i2 = headB;
        while(i1 != i2){
            if(i1 != NULL){
                i1 = i1->next;
            }else{
                i1 = headB;
            }
            if(i2 != nullptr){
                i2 = i2->next;
            }else{
                i2 = headA;
            }
            
        }
        return i1;
    }
};
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
        if(list1==nullptr){
            return list2;
        }
        if(list2==nullptr){
            return list1;
        }
        ListNode * itr1 = list1;
        ListNode * itr2 = list2;
        ListNode* dummy = new ListNode();
        ListNode* itr3 = dummy;
        while(itr1 && itr2){
            if(itr1->val <= itr2->val){
                itr3->next = itr1;
                itr1 = itr1->next;
                
            }else{
                itr3->next = itr2;
                itr2 = itr2->next;
            }
            itr3 = itr3->next;
        }
        if(itr1){
            itr3->next = itr1;
            itr3 = itr3->next;
        }
        if(itr2){
            itr3->next = itr2;
            itr3 = itr3->next;
        }
        return dummy->next;


    }
};
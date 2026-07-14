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
    int pairSum(ListNode* head) {
        //find mid of LL
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL){
            slow = slow->next; // this gives us the mid element
            fast = fast->next->next;
        }

        //Reverse LL
        ListNode* nextNode = NULL;
        ListNode* prev = NULL;
        ListNode* mid = slow;

        while(mid != NULL){
            nextNode = mid->next;
            mid->next = prev;
            prev = mid;
            mid = nextNode;
        }

        //find max
        int res = 0;
        ListNode* curr = head;
        while(prev != NULL){
            res = max(res,curr->val + prev->val);
            curr = curr->next;
            prev = prev->next;
        }
        return res;



        
    }
    
};
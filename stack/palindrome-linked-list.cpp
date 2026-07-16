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
    bool isPalindrome(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* temp = slow;
        ListNode* prev = nullptr;
        //ListNode* agla = t
        while(temp){
            ListNode* nextNode = temp->next;
            temp->next = prev;
            prev = temp;
            temp = nextNode;

        }
        
        ListNode* curr = head;
        while(prev){
            if(curr->val != prev->val){
                return false;
            }
            curr = curr->next;
            prev = prev->next;
        }
        return true;
    }
};
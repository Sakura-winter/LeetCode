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
    int countNode(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp){
            temp = temp->next;
            cnt++;

        }
        return cnt;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){
            head = nullptr;
            return head;
        }
        if(head == nullptr)return head;

        int cnt = countNode(head);
        int goTill = cnt - n;
        ListNode * curr = head;
        while(goTill > 1){
            
            curr = curr->next;
            goTill--;
        }
        if(goTill == 0 && head->next != nullptr){
            head = head->next;
            return head;
        }
        if(curr->next == nullptr){
            curr = nullptr;
            return head;
        }
        curr->next = curr->next->next;
        return head;

    }
};
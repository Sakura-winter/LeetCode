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
    int getNumber(ListNode* head){
        ListNode* temp = head;
        int cnt = 0;
        while(temp!=nullptr){
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    int getDecimalValue(ListNode* head) {
        int cnt = getNumber(head) - 1;
        int sum = 0;
        ListNode* temp = head;
        while(cnt >= 0 && temp != nullptr){
            sum = sum + (pow(2, cnt) * temp->val);
            temp = temp->next;
            cnt--;
        }
        return sum;


    }
};
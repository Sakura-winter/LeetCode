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

    /*
    //Count the number of nodes
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
        //if single node, then delete that node and move point head to the nullptr.
        //coz it's confirmed that they will delete a node
        if(head->next == nullptr){
            head = nullptr;
            return head;
        }

        int cnt = countNode(head);
        int goTill = cnt - n;//run the loop till here, example if n = 2 and cnt = 5, then 5 - 2 = 3, go till the 3rd element 
        ListNode * curr = head;
        //stop before the element we want to delete, why goTill > 1, coz curr is at head means it's
        //already 1 and goTill 3 -> 2, curr is 1 step ahead
        while(goTill > 1){
            curr = curr->next;
            goTill--;
        }
        //if goTill == 0, means we have to delete the head
        if(goTill == 0 && head->next != nullptr){
            head = head->next;
            return head;
        }
        
        curr->next = curr->next->next;
        return head;
        */
        ListNode* removeNthFromEnd(ListNode* head, int n){
            
            ListNode* slow = head;
            ListNode* fast = head;
            while(n--){
                fast = fast->next;
                
            }
            if(fast == nullptr){
                return head->next;
            }
            while(fast && fast->next){
                fast = fast->next;
                slow = slow->next;
            }
            slow->next = slow->next->next;
            return head;
        }

};
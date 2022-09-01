/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//Runtime: 15 ms, faster than 63.20% / Memory Usage: 8.1 MB, less than 58.71%
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next==NULL) return false;

        ListNode* slow=head;
        ListNode* fast=head;
        
        while(1){
            if(fast->next!=NULL && fast->next->next!=NULL){
                fast = fast -> next -> next;
                slow = slow -> next;
                
                if(fast == slow) return true;
            }
            else break;
        }
        return false;
    }
};

// Runtime: 17 ms, faster than 50.70% / Memory Usage: 8.1 MB, less than 58.71%
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL) return false;

        ListNode* slow=head;
        ListNode* fast=head;
        
        while(fast != NULL && fast->next!=NULL){
            fast = fast -> next -> next;
            slow = slow -> next;
                
            if(fast == slow) return true;
        }
        return false;
    }
};
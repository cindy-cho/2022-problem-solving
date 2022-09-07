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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *crnt, *next;
        crnt = head;
        while(crnt && crnt->next){
            next = crnt->next;
            while(next && crnt->val == next->val) next = next->next;
            crnt->next = next;
            crnt = crnt->next;
        }
        
        return head;
    }
};
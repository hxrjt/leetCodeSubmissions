// Last updated: 7/31/2025, 10:16:44 PM
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
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;

        while(slow!=NULL && fast!=NULL){
            fast=fast->next;
            if(fast==NULL){
                return false;
            }
            else if(fast->next!=NULL){
                fast=fast->next;
            }
            slow=slow->next;

            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
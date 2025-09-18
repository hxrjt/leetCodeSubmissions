// Last updated: 9/19/2025, 12:41:27 AM
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
    ListNode* deleteMiddle(ListNode* head) {
        if(!head || !head->next) return NULL;
        ListNode* slow=head;
        ListNode* fwd=NULL;
        ListNode* pre=NULL;
        ListNode* fast=head;
        while(fast && fast->next){
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        fwd=slow->next;
        pre->next=fwd;
        delete slow;
        return head;
    }
};
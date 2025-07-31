// Last updated: 7/31/2025, 10:17:21 PM
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* pre=NULL;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        if(fast==NULL){
            head=slow->next;
            return head;
        }
        while(fast!=NULL){
            pre=slow;
            slow=slow->next;
            fast=fast->next;
        }
        pre->next=slow->next;
        return head;
    }
};
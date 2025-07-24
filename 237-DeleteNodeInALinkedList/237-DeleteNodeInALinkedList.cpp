// Last updated: 7/25/2025, 1:49:26 AM
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
    void deleteNode(ListNode* node) {
        if(node==NULL || node->next==NULL){
            return;
        }
        ListNode* cur=node;
        ListNode* pre=NULL;
        while(cur->next!=NULL){
            cur->val=cur->next->val;
            pre=cur;
            cur=cur->next;
        }
        pre->next=NULL;
        delete cur;
    }
};
// Last updated: 7/31/2025, 10:16:13 PM
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
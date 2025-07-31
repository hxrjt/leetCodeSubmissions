// Last updated: 7/31/2025, 10:16:19 PM
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
    ListNode* reverseList(ListNode* &head) {
        ListNode* cur=head;
        ListNode* pre=NULL;
        ListNode* fwd=NULL;
        while(cur!=NULL){
            fwd=cur->next;
            cur->next=pre;
            pre=cur;
            cur=fwd;
        }
        head=pre;
        return head;
    }
};
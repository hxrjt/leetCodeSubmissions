// Last updated: 7/25/2025, 1:50:14 AM
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
    private:
    ListNode* swap(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* cur=head;
        ListNode* pre=NULL;
        ListNode* fwd=NULL;
        for(int i=1;i<=2;i++){
            fwd=cur->next;
            cur->next=pre;
            pre=cur;
            cur=fwd;
        }
        head->next=swap(cur);
        return pre;
    }
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* ans=swap(head);
        return ans; 
    }
};
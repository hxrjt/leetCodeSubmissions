// Last updated: 7/31/2025, 10:17:16 PM
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
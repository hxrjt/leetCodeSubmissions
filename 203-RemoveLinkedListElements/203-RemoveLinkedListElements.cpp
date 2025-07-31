// Last updated: 7/31/2025, 10:16:21 PM
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL){
            return head;
        }
        ListNode* cur=head;
        ListNode* pre=NULL;
        while(cur!=NULL){
            if(head->val==val){
                ListNode* temp=head;
                cur=cur->next;
                head=cur;
                delete temp;
            }
            else if(cur->val==val){
                ListNode* temp=cur;
                pre->next=cur->next;
                cur=cur->next;
                delete temp;
            }
            else{
                pre=cur;
                cur=cur->next;
            }
        }
        return head;    
    }
};
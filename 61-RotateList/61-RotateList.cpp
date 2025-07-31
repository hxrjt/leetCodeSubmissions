// Last updated: 7/31/2025, 10:16:59 PM
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k==0){
            return head;
        }
        if(head==NULL || head->next==NULL){
            return head;
        }
        int count=0;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast!=NULL){
            count++;
            fast=fast->next;
        }
        int rotate=k%count;
        fast=head;
        for(int i=1;i<=rotate;i++){
            fast=fast->next;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        fast->next=head;
        head=slow->next;
        slow->next=NULL;
        return head;
    }
};
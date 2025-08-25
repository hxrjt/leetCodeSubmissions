// Last updated: 8/26/2025, 1:39:01 AM
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
        ListNode* fast=head;
        ListNode* slow=NULL;
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        int k=count-n;
        if(k==0){
            fast=fast->next;
            slow=fast;
            return fast;
        }
        for(int i=0;i<k;i++){
            slow=fast;
            fast=fast->next;
        }
        if(k<count){
            slow->next=fast->next;
            fast->next=NULL;
            delete fast;
            return head;
        }
        return head;
    }
};
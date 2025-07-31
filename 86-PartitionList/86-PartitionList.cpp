// Last updated: 7/31/2025, 10:16:50 PM
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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* lessDummy=new ListNode(0);
        ListNode* moreDummy=new ListNode(0);
        ListNode* lessDummyTail=lessDummy;
        ListNode* moreDummyTail=moreDummy;
        ListNode* cur=head;
        while(cur!=NULL){
            if(cur->val<x){
                lessDummyTail->next=cur;
                lessDummyTail=lessDummyTail->next;
                cur=cur->next;
            }
            else{
                moreDummyTail->next=cur;
                moreDummyTail=moreDummyTail->next;
                cur=cur->next;
            }
        }
        moreDummyTail->next=0;
        lessDummyTail->next=moreDummy->next;
        return lessDummy->next;
    }
};
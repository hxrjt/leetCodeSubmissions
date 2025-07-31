// Last updated: 7/31/2025, 10:16:51 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode* newList=new ListNode(head->val);
        ListNode* temp=newList;
        ListNode* cur=head;
        while(cur!=NULL){
            if(temp->val==cur->val){
                cur=cur->next;
            }
            else{
                ListNode* node=new ListNode(cur->val);
                temp->next=node;
                temp=temp->next;
                cur=cur->next;
            }
        }
        return newList;
    }
};
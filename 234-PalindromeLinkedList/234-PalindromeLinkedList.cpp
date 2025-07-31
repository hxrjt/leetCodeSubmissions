// Last updated: 7/31/2025, 10:16:14 PM
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
    ListNode* reverse(ListNode* head){
        ListNode* cur=head;
        ListNode* fwd=NULL;
        ListNode* pre=NULL;
        while(cur!=NULL){
            fwd=cur->next;
            cur->next=pre;
            pre=cur;
            cur=fwd;
        }
        return pre;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL){
            return true;
        }
        int count=0;
        ListNode* cur=head;
        while(cur!=NULL){
            count++;
            cur=cur->next;
        }
        int mid=count/2;
        cur=head;
        ListNode* list2=head;
        for(int i=1;i<=mid;i++){
            list2=list2->next;
        }
        list2=reverse(list2);
        while(cur!=NULL && list2!=NULL){
            if(cur->val==list2->val){
                cur=cur->next;
                list2=list2->next;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
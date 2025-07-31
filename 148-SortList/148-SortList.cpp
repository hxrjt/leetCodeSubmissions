// Last updated: 7/31/2025, 10:16:41 PM
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
ListNode* findMid(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    ListNode* fast=head->next;
    ListNode* slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

ListNode* merge(ListNode* left, ListNode* right){
    ListNode* ans=new ListNode(-1);
    ListNode* temp=ans;
    while(left!=NULL && right!=NULL){
        if(left->val<=right->val){
            temp->next=left;
            left=left->next;
        }
        else{
            temp->next=right;
            right=right->next;
        }
        temp=temp->next;
    }
    while(left!=NULL){
        temp->next=left;
        left=left->next;
        temp=temp->next;
    }
    while(right!=NULL){
        temp->next=right;
        right=right->next;
        temp=temp->next;
    }
    ans=ans->next;
    return ans;
}

ListNode* mergeSort(ListNode* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    
    ListNode* mid=findMid(head);
    ListNode* left=head;
    ListNode* right=mid->next;
    mid->next=NULL;

    left=mergeSort(left);
    right=mergeSort(right);

    ListNode* ans=merge(left,right);
    return ans;
}
public:
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* ansNode=mergeSort(head);
        return ansNode;
    }
};
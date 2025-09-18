// Last updated: 9/19/2025, 12:42:20 AM
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
    ListNode* oddEvenList(ListNode* head) {
        vector<int> even;
        vector<int> odd;
        ListNode* curr=head;
        int count=1;
        while(curr!=NULL){
            if(count%2){
                odd.push_back(curr->val);
            }
            else{
                even.push_back(curr->val);
            }
            count++;
            curr=curr->next;
        }
        ListNode* newHead=new ListNode(-1);
        ListNode* newcurr=newHead;
        for(int i=0;i<odd.size();i++){
            ListNode* temp=new ListNode(odd[i]);
            newcurr->next=temp;
            newcurr=newcurr->next;
        }
        for(int i=0;i<even.size();i++){
            ListNode* temp=new ListNode(even[i]);
            newcurr->next=temp;
            newcurr=newcurr->next;
        }
        return newHead->next;
    }
};
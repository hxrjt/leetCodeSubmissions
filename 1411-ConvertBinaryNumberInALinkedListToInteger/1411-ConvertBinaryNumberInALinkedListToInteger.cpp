// Last updated: 7/25/2025, 1:49:02 AM
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
    int getDecimalValue(ListNode* head) {
        vector<int> num;
        ListNode* ptr=head;
        while(ptr!=NULL){
            num.push_back(ptr->val);
            ptr=ptr->next;
        }
        int ans=0;
        reverse(num.begin(),num.end());
        for(int i=0;i<num.size();i++){
            ans=ans+(num[i]<<i);
        }
        return ans;
    }
};
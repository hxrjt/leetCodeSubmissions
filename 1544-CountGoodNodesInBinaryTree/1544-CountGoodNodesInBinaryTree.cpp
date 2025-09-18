// Last updated: 9/19/2025, 12:41:37 AM
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    void good(TreeNode* root,int max,int &count){
        if(root==NULL){
            return;
        }
        if(root->val>=max){
            max=root->val;
            count++;
        }
        good(root->left,max,count);
        good(root->right,max,count);

    }
public:
    int goodNodes(TreeNode* root) {
        int max=root->val;
        int count=0;
        good(root,max,count);
        return count;
    }
};
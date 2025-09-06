// Last updated: 9/7/2025, 12:04:09 AM
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
    bool dfscheck(TreeNode* root, TreeNode* subRoot){
        if(root==NULL && subRoot==NULL){
            return true;
        }
        if((root!=NULL && subRoot==NULL) || (root==NULL &&subRoot!=NULL)){
            return false;
        }
        if(root->val!=subRoot->val){
            return false;
        }
        return dfscheck(root->left,subRoot->left) && dfscheck(root->right, subRoot->right);
    }
public:
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        bool ans;
        if(!root){
            return false;
        }
        if(root->val==subRoot->val){
            ans=dfscheck(root,subRoot);
        }

        return ans || isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
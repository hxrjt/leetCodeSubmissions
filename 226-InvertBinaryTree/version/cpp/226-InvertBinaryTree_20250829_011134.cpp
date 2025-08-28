// Last updated: 8/29/2025, 1:11:34 AM
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
private:
void dfs(TreeNode* root,TreeNode* &temp){
    if(root==NULL){
        return;
    }
    if(root->right){
        temp->left=new TreeNode(root->right->val);
        dfs(root->right,temp->left);
    }
    if(root->left){
        temp->right=new TreeNode(root->left->val);
        dfs(root->left,temp->right);
    }
    
}
public:
    TreeNode* invertTree(TreeNode* root) {
        if(!root){
            return root;
        }
        TreeNode* temp= new TreeNode(root->val);
        dfs(root,temp);
        return temp;
    }
};
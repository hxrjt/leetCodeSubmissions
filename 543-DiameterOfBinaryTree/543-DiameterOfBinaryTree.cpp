// Last updated: 9/19/2025, 12:42:13 AM
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
int depth(TreeNode* root,int &maxDia){
    if(root==NULL){
        return 0;
    }
    int left=depth(root->left,maxDia);
    int right=depth(root->right,maxDia);
    maxDia=max(left+right,maxDia);
    return max(left,right)+1;
}
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia=0;
        int ans=depth(root,maxDia);
        return maxDia;
    }
};
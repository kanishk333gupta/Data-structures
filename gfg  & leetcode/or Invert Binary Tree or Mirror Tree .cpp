#https://leetcode.com/problems/invert-binary-tree/submissions/

class Solution {
public:    
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL) return NULL;
        // while(root!=NULL){
            swap(root->left,root->right);
            invertTree(root->left);
            invertTree(root->right);
        return root;
    }
};
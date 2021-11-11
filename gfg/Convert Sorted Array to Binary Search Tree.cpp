#https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/

class Solution {
public:
    
    
    TreeNode* bst(vector<int>&nums,int left,int right){
        if(left<=right){
            int mid = left + (right-left)/2;
            TreeNode *root = new TreeNode(nums[mid]);
            root->left = bst(nums, left , mid-1);
            root->right = bst(nums ,mid+1, right);
            return root;
        }return 0;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        // int left = 0 ;
        // int right = nums.size()-1;
        return  bst(nums,0,nums.size()-1);
    }
};
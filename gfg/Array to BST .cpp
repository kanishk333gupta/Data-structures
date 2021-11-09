#https://practice.geeksforgeeks.org/problems/array-to-bst4443/1#

class Solution {
public:

    void bst(vector<int>& nums ,vector<int>&v, int low , int high){
        // int l = 0 ; int h = nums.size()-1;
        // vector<int>;
        if(low<=high){
        // for(int i = 0 ; i < nums.size();i++){
            int mid = low + (high - low)/2;
            v.push_back(nums[mid]);
            bst(nums, v, low, mid-1);
            bst(nums, v, mid +1,high);
        }
        // return nums;    
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>v;
        int l= 0;
        int h= nums.size()-1 ; 
        bst(nums,v,l,h);
        return v;
        
    }
};
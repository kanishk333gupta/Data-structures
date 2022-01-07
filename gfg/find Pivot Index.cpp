//https://leetcode.com/problems/find-pivot-index/

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0 , psum = 0 ;        
        int n = nums.size();
        for(int i : nums) sum+= i;
        for(int i=0 ; i<n ; i++){
            sum-=nums[i];
            if(psum==sum) return i ;
            psum+=nums[i];
        }return -1;
    }
};
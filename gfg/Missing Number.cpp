//https://leetcode.com/problems/missing-number/


class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        // int sum = n*(n+1)/2 ;
        for(int i = 0 ; i< nums.size() ; i++){
            // sum-=nums[i];
            n^=nums[i];
            n^=i;
        }return n;
        // return sum;
    }
};
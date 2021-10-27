#https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1#

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int a[], int n){
        int rmax = 0 , res =INT_MIN;
        for(int i=0 ; i < n ; i++){
            rmax = max(a[i] , rmax += a[i]);
            res = max(res,rmax);
  
        }return res;
        // Your code here
        
    }
};
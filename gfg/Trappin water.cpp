// https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1#
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    // typedef long long as ll;
    long long trappingWater(int arr[], int n){
        // code here
        vector<int>l(n,0);
        vector<int>r(n,0);
        // int l = 0 , r = 0 ;
        long long int sum = 0;
        l[0]=arr[0];
        r[n-1]=arr[n-1];
        
        for(int i = 1 ; i < n ; i++) l[i] = max(l[i-1],arr[i]);
        for(int i = n-2 ; i >= 0 ; i--) r[i] = max(r[i+1],arr[i]);
 
        
        for(int i = 0 ; i < n ; i ++) sum+=min(l[i],r[i])-arr[i];
        return sum ;
        
        
    }
};
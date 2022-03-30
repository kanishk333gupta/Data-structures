//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1#

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int ans = 0 ;
        unordered_map<int,int>mp;
        for(int i = 0 ; i < n ; ++i){
            if(mp.find(k-arr[i])!=mp.end())ans+=mp[k-arr[i]]; // checks for the remaining number to be present in it or not
            mp[arr[i]]++;
        }
        return ans;
    }
};
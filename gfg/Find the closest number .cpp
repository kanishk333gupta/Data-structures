//gfg and leetcode

//https://leetcode.com/problems/find-k-closest-elements/

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>> maxp;
        vector<int>v;
        for(int i = 0 ; i < arr.size() ; i++){
            maxp.push({abs(arr[i]-x),arr[i]});
            if(maxp.size()>k) maxp.pop();
        }
            while(maxp.size()>00){
                v.push_back(maxp.top().second);
                maxp.pop();
            }
        sort(v.begin(),v.end());
        return v;
    }
};






//https://practice.geeksforgeeks.org/problems/find-the-closest-number5513/1#


class Solution{
    public:
    
    
  int getClosest(int val1, int val2, 
                   int target) 
    { 
        if (target - val1 >= val2 - target) 
            return val2; 
        else
            return val1; 
    }   
    // Returns element closest to target in arr[] 
    int findClosest(int arr[], int n, int target) 
    { 
        // Corner cases 
        if (target <= arr[0]) 
            return arr[0]; 
        if (target >= arr[n - 1]) 
            return arr[n - 1]; 
      
        // Doing binary search 
        int i = 0, j = n, mid = 0; 
        while (i < j) { 
            mid = (i + j) / 2; 
      
            if (arr[mid] == target) 
                return arr[mid]; 
      
            /* If target is less than array element, 
                then search in left */
            if (target < arr[mid]) { 
      
                // If target is greater than previous 
                // to mid, return closest of two 
                if (mid > 0 && target > arr[mid - 1]) 
                    return getClosest(arr[mid - 1], 
                                      arr[mid], target); 
      
                /* Repeat for left half */
                j = mid; 
            } 
      
            // If target is greater than mid 
            else { 
                if (mid < n - 1 && target < arr[mid + 1]) 
                    return getClosest(arr[mid], 
                                      arr[mid + 1], target); 
                // update i 
                i = mid + 1;  
            } 
        } 
      
        // Only single element left after search 
        return arr[mid]; 
    } 
};
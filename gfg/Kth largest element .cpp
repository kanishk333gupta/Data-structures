#https://practice.geeksforgeeks.org/problems/kth-largest-element5034/1/

class Solution
{
    public:
    //Function to return kth largest element from an array.
    int KthLargest(int arr[], int n, int k) {
        // Your code here
        priority_queue<int, vector<int>, greater<int>>minpq;
        for(int i = 0 ; i < n ; i++){
            minpq.push(arr[i]);
            if(minpq.size()>k) minpq.pop();
        }return minpq.top();
    }
};
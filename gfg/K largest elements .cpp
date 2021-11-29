#https://practice.geeksforgeeks.org/problems/k-largest-elements3736/1#

class Solution
{
    public:
    //Function to return k largest elements from an array.
    vector<int> kLargest(int arr[], int n, int k)
    {
        // code here
        vector<int>v;
        priority_queue<int,vector<int>,greater<int>> minp;
        for(int i = 0 ; i < n ; i++){
            minp.push(arr[i]);
            if(minp.size()>k) minp.pop();
        }
        while(!minp.empty()){
            v.push_back(minp.top());
            minp.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
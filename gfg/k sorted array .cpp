#https://practice.geeksforgeeks.org/problems/k-sorted-array1610/1#

class Solution {
  public:
  string isKSortedArray(int arr[], int n, int k)
    {
        
        vector<int>v(arr,arr+n);
        sort(v.begin(),v.end());
        unordered_map<int,int>m;
        for(int i = 0  ;  i < n ;i++) m[v[i]]=i;
        for(int i = 0 ; i < n ; i++){
            if(k<abs(i-m[arr[i]])) return "No";
        }return "Yes";
  


    // int binary(vector<int>arr ,int x){
    //     int l = 0;int h = arr.size()-1;
    //     while(l<=h){
    //         int m = l + (h-l)/2;
    //         if(x==arr[m]) return m;
    //         else if(x<arr[m]) h = m-1;
    //         else l = m+1;
    //     // }return -1; 
    //     }
    // }      
        //code here.
        // vector<int>v;
        // for(int i = 0 ; i < n ; i++) v.push_back(arr[i]);
        //     sort(v.begin(),v.end());
        // for(int i = 0 ; i < n ; i++){
        //     int j = binary(v,arr[i]);
        //     if(k<abs(i-j)) return "No";
        //     }return "Yes";
        }
};
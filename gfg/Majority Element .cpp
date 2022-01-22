//https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1#

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        int ans = 0 ;
        int n = size/2 ;
        unordered_map<int,int>mp;
        for(int i = 0 ; i < size ; i++)
            mp[a[i]]++;
        for(auto i: mp){
            if(i.second>n) ans = i.first;
        }
        return (ans==0)? -1 : ans ;
    }
};

#https://practice.geeksforgeeks.org/problems/insert-in-stack/1/#

class Solution{
  public:
    stack<int> insertIntoStack(int n, int arr[]){
      
      //Your code here
      stack<int>v;
      for(int i = 0 ; i < n ; i++){
          v.push(arr[i]);
      }return v;
      
      
    }

};
#https://practice.geeksforgeeks.org/problems/reverse-array-using-stack/1/#


class Solution{
  public:
    void reverseArray(int n, int* arr){
        
      //Your code here
      stack<int>s;
      for(int i = 0 ; i < n ; i++) s.push(arr[i]);
      
      for(int i = 0 ; i < n ; i++) {
          arr[i]=s.top();
          s.pop();
      }    
    }
};
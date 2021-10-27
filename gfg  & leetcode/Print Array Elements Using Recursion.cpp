#https://practice.geeksforgeeks.org/problems/print-array-elements-using-recursion/1/#

class Solution{
    public:
        void printArrayRecursively(int arr[],int n)
    {
       //Your code here
       //Use recursion to print array elements from start to end
       if(n==0) return;
       //cout << arr[n] << "";
       //n=n-1;
    //   int i = 0 ;
       //i = n - i ;
       printArrayRecursively(arr , n-1);
       cout<<arr[n-1]<<" ";
        
    }
};

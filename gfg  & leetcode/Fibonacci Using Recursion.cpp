#https://practice.geeksforgeeks.org/problems/fibonacci-using-recursion/1/#

class Solution{
    public:
    //Complete this function
    int fibonacci(int n)
    {
        //Your code here
        if(n<2) return n; 
        return fibonacci(n-1)+fibonacci(n-2);
    }
};

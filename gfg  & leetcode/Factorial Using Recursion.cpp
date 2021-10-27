#https://practice.geeksforgeeks.org/problems/factorial-using-recursion/1/#

class Solution{
    public:
        int factorial(int N)
    {
        //Your code here
        // int res = 0;
        if(N<1) return 1 ;
        return N*factorial(N-1);
    }
};
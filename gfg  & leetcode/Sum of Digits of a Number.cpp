#https://practice.geeksforgeeks.org/problems/sum-of-digits-of-a-number/1/

class Solution{
  public:
    // Complete this function
    int sumOfDigits(int n)
    {
        //Your code here
        int sum =0 ;
        if(n==0) return 0;
        return n%10 + sumOfDigits(n/10) ;
    }
};

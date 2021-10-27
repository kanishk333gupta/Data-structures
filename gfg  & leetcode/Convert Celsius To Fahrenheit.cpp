#https://practice.geeksforgeeks.org/problems/convert-celsius-to-fahrenheit/1


class Solution{
    public:
    
    //You need to complete this function
    double cToF(int C)
    {
        //Your code here
        int F = 0;
        F = C*9/5 +32 ;
        return F ;
    }
};
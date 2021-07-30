#https://practice.geeksforgeeks.org/problems/digits-in-factorial/1
class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        double res = 0 ;
        if (N<0) return 0;
        if (N<=1) return 1;
        double digits = 0;
        for (int i=2; i<=N; i++){
        digits += log10(i);
        
        }return floor(digits) + 1;
    }
};
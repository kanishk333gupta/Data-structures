#https://practice.geeksforgeeks.org/problems/primality-test/1/#

class Solution{
    public:
        bool isPrime(int N)
    {
        //Your code here
        if ( N < 2 ) return false ;
        for(int i = 2  ; i <= sqrt(N) ; i++){
            
            if (N%i == 0) return false ;
            
        } return true ;
    }

};

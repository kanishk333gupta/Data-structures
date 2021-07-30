#https://practice.geeksforgeeks.org/problems/square-root/1/#

class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here  
        if(x==0 || x==1) return x;
        long long int low = 0 , high = x , res = 0 ;
        while (low <= high) {
            long long int mid =( high + low ) / 2 ;
            if (x==mid*mid) return (mid) ;
            else if (x > mid*mid) 
            { 
                low = mid +1 ;
                res = (mid) ;
            }
            else high = mid -1 ;
        }return res ;
    }
};

//https://practice.geeksforgeeks.org/problems/count-squares3649/1#

class Solution {
  public:
    int countSquares(int N) {
        int ans = 0 ;
        for(int i =1 ; (i*i)<N ; i++ )ans +=1;
        return ans ;
    }
};
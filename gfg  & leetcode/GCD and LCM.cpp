#https://practice.geeksforgeeks.org/problems/lcm-and-gcd4516/1#

class Solution {
  public:
  int func(long long a , long long b){
        if (b==0) return a ;
        return func (b , a%b) ;    
        }
    vector<long long> lcmAndGcd(long long a , long long b) {
        // code here
        long long gcd = func(a,b);
        long long lcm = (a*b) /func(a,b) ;
        return  {lcm , gcd };
    }
};
#https://practice.geeksforgeeks.org/problems/factorial5739/1#

long long int factorial(int N){
       //code here
       long long int ans = 1;
       for(int i = 1 ; i < N ; i++ ){
          ans = ans*(i+1) ;  
       }return ans ;
}
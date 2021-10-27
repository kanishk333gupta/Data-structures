// https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1#


class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int step = 0,latestpos = 0,currpos = 0 ;
        for(int i =  0 ; i < n-1 ; i ++){
        
        currpos = max( currpos ,  arr[i] + i);
        
        if(i==latestpos){
            step++;  
            latestpos = currpos ;
        }
        if (latestpos >= n -1) 
        {
            break;
        }
    }
    if(latestpos < n-1){ 
        return -1;
    }return step ;
        
    }
};

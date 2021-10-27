#https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1/#

class Solution{
    public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K) 
    { 
        for(int i = 0 ; i < N ; i ++){
            if (K==arr[i]) return 1 ;
            
            
        }return -1 ;
       // Your code here
       
    }
};

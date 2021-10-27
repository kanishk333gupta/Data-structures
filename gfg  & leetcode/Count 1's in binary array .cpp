#https://practice.geeksforgeeks.org/problems/count-1s-in-binary-array-1587115620/1/#


class Solution{
    public:
    // Function to count number of Ones
    // arr: input array 
    // N: size of input array
    int countOnes(int arr[], int N)
    { int count = 0 ; 
        for (int i = 0 ; i < N ; i++){
            if (arr[i]==1)
            count ++ ;
            
        }return count ;
        return -1 ;
    }
};

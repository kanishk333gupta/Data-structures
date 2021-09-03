#https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#
class Solution{   
public:
    //Function to partition the array around the range such 
    //that array is divided into three parts.
    
    void swap(int *a, int *b){
        int temp = *a ;
        *a = *b ;
        *b = temp ;
    }
    void threeWayPartition(vector<int>& arr,int a, int b)
    {
        // code here 
        int n = arr.size();
        int i = 0 ; int low = 0 ; int high = n-1 ;
        //vector<int> temp ;
        while(i<=high){
               if(arr[i] < a) {
                    swap(&arr[i],&arr[low]);
                   low++;i++;
               }
               else if(arr[i] > b) {
                    swap(&arr[i],&arr[high]);                 
                    high--;
               }
               else {
                   i++;
                }
        }
    }
};

#https://practice.geeksforgeeks.org/problems/remove-duplicate-elements-from-sorted-array/1

class Solution{
public:
    int remove_duplicate(int a[],int n){
        // code here
        int temp = 1 ;
        for (int i = 1 ; i < n ; i ++){
            if (a[i]!=a[temp-1]){
                a[temp]=a[i] ; 
                temp++;
            }//return temp ;
        }return temp ; 
    }
};

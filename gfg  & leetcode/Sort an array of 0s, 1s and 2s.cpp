#https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

class Solution
{
    public:
    void sort012(int a[], int n)
    {
       
        int zero = 0 , two = n-1 ;

        for (int i = 0 ; i <= two ; i ++){
        if (a[i] == 0){
            swap(a[i] , a[zero]);
            zero++ ;
        }
        if (a[i] == 2){
            swap(a[i]  , a[two]);
            two--;
            i--;
        }
        }  
    }
    
};
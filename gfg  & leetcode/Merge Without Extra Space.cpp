#https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1

class Solution{
public:
	void merge(int arr1[], int arr2[], int n, int m) {
	    // code here
	    int j = 0 ;
	    for ( int i = n - 1 ; i >= 0 ; i-- ){
	        if (j > m -1)
	            break ;
	        if (arr1[i] > arr2[j])
	        swap(arr1[i],arr2[j]);
	        j++;
	       
	    }
	   
    sort(arr1 ,arr1+n);
    sort(arr2 ,arr2 +m);
	}
};
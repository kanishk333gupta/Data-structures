#https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1/

class Solution{
    public:
    //Function to return a list containing the intersection of two arrays.
    vector<int> printIntersection(int arr1[], int arr2[], int n, int m) 
    { 
        set <int>st ;
        vector<int> v ;
        int i = 0,j = 0 ,res = 0 ;
        if(i<n && arr1[i] == arr1[i-1]) i++;
        if(j<m && arr2[j] == arr2[j-1]) j++;
        while ( i < n && j < m ){
        if (arr1[i] == arr2[j]){
            st.insert(arr1[i]);
            j++;
            i++; 
        }
        else if (arr1[i] > arr2[j]) {
            j++ ; 
        }
         else i++;
        }
        for(auto p : st){
            v.push_back(p);
        }return v;
           
    }

};
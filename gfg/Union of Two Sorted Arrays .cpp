#https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays/1#

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
            {
                //Your code here
                //return vector with correct order of elements
     set<int> st;
     st.insert(arr1,arr1+n);
     st.insert(arr2,arr2+m);
     
     vector<int> v;
     v.assign(st.begin(),st.end());
    
     return v;
    }
};
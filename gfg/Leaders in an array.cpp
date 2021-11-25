#https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int> p ;
        //int max = n-1;
        int temp = a[n-1]  ; 
        p.push_back(a[n-1]);
        for ( int i = n-2 ; i >= 0 ; i-- ){
                if (a[i]>= temp ){
                 p.push_back(a[i]); 
                 temp = a[i];
                }
        }reverse(p.begin(),p.end());
        return p ;
    }
};
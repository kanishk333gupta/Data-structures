#https://practice.geeksforgeeks.org/problems/adding-two-matrices3512/1/#

class Solution
{   
    public:
    //Function to add two matrices.
    vector<vector<int> > sumMatrix( const vector<vector<int> >& A, const vector<vector<int> >& B)
    {
        // code here
        
        int t ;
        int n = A.size() ; 
        int m = B.size() ;
        int p = A[0].size() ; 
        int q = B[0].size() ;
        vector<vector<int>>res(n,vector<int>(q));
        if (n!=m||p!=q) {
            vector<vector<int> > tmp ;
            return tmp;
        }
            vector <int> v;
        for (int i =  0 ; i < n ; i++){
            for (int j =  0 ; j < p ; j++){
                res[i][j]  = A[i][j] + B[i][j] ;
            }
        }return res ;
    }
};
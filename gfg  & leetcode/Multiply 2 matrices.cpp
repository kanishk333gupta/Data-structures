#https://practice.geeksforgeeks.org/problems/multiply-2-matrices4144/1#

class Solution {
public:
    void Mutliply(vector<vector<int> >& A, vector<vector<int>>& B) {
        // Code here
        
        int n = A.size();
        int i = 0 ; int j = 0 ;
        // int n = A[0].size();
        // int o = B.size();
        // int p = B[0].size();
        vector<vector<int>> C(n,vector<int>(n));
         for (int i = 0 ; i < n ; i++){
             int v;
             for (int j = 0 ; j < n ; j++){
                  for (int k = 0 ; k <n  ; k++){
                      C[i][j]+= A[i][k]*B[k][j];
                  } 
             }
         } A = C;
    }
};
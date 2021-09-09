#https://practice.geeksforgeeks.org/problems/multiply-matrices/1#

void multiply(int A[][100], int B[][100], int C[][100], int N)
{
      //add code here.
     // vector<int> A 
      int i = 0 ;
      int j = 0 ;
      
      for (int i = 0 ; i < N ; i++){
          for (int j = 0 ; j < N ; j++){
              int v = 0 ;
             for (int k = 0 ; k < N ; k++){
                v += A[i][k]*B[k][j];    
            }
            C[i][j] = v;        
        }
      }
}
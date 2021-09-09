#https://practice.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles/1/#


class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int a = 0 ; 
        int b = 0 ;
        vector<int> res;
        for(int i =  0 ; i < n ; i++){
          for(int j =  0 ; j < n ; j++){
                if (i <= j){
                    a += matrix[i][j];
                 //   res.push_back(matrix[i][j]);                    
                }
                if(i >= j){
                    b += matrix[i][j];
                // res.push_back(matrix[i][j]); 
                }
            }  
        }res.push_back(a);
         res.push_back(b);
         return res;
    }
};

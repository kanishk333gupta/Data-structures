#https://practice.geeksforgeeks.org/problems/rotate-by-90-degree/1/#

class Solution
{   
    public:
    //Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int> >& m, int n) 
    { 
        // code here 
        int res = 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(i!=j){
                    swap(m[i][j],m[j][i]);
                }
            }
        }
        int i = 0 ; int j = n-1 ;
        while (i<j){
            swap(m[i],m[j]);
            i++;j--;
        }
        
    }
    
};

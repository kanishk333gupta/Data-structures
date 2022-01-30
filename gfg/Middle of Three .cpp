//https://practice.geeksforgeeks.org/problems/middle-of-three2926/1#

class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        
        vector<int>v{A,B,C};
        sort(v.begin(),v.end());
        return v[1];

	//int ma = max(A,max(B,C));
        //int mi = min(A,min(B,C));
        //return -(ma + mi) + A + B + C ;
    }
};
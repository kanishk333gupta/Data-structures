#https://practice.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1/#

class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        //vector<int> a;
        long long int low = 0 ; long long int high = v.size() -1 ; 
        int res =-1;
        while (low <= high ){
            int mid = (low + high)/2;        
           // if (v[mid]==x) res = mid ;
            if(v[mid] >= x){ 
            //   if (x >= v[mid] && x < v[mid+1] )
            //         return mid ;
            //     else 
                    high  = mid - 1 ;
                
            }
            else {
                // if (x >= v[mid] && x < v[mid+1] )
                //     return mid ;
                // else 
                    low  = mid + 1 ;res=low;
                    
            }          
        }if(res==n)
        return n-1;
    return res;
        
    }
};

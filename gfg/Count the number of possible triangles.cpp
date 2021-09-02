#https://practice.geeksforgeeks.org/problems/count-possible-triangles-1587115620/1#


class Solution
{
    public:
    //Function to count the number of possible triangles.
    int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int count = 0 ;
        for(int i = n-1 ; i >= 2 ; i--){
            int a = 0 , b = i - 1;
            while (a < b) {
                if (arr[a] + arr[b] > arr[i]){
                    count+=b-a;
                    b--;
                }
                else a++;
        }
    }
        return count ;
    }
};


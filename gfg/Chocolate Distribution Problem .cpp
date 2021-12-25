// https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    long long int res= INT_MAX ;
    sort(a.begin(),a.end());
    for(long long int i = 0 ; i <= n-m ; i++){
        // res = a[i]-a[i+m];
        long long int p = -a[i]+a[m+i-1];
        res = min(res,p);
    }return res;
    
    }   
};
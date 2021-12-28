//https://practice.geeksforgeeks.org/problems/find-the-median0527/1#

class Solution
{
public:
	public:
		int find_median(vector<int> v)
		{
		    // Code here.
		    int res = 0;
		    sort(v.begin(),v.end());
		    int n = v.size();
		    return ((n%2==0)? ( v[(n-1)/2] + v[(n+1)/2] ) /2 : v[n/2]) ;
		    
		}
};
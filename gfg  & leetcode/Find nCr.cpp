#https://practice.geeksforgeeks.org/problems/find-ncr/1/#

int nCr(int n,int r)
{
    //Your code here
    if(n==r || r==0) return 1 ;
    return nCr(n-1,r-1)+nCr(n-1,r);
}
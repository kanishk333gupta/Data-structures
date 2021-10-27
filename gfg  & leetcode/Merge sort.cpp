#https://practice.geeksforgeeks.org/problems/merge-sort/1/#

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r){
     int n1 = m - l + 1;
     int n2 = r - m;
     int al[n1], ar[n2];
     
     for(int i = 0; i < n1; i++)
        al[i] = arr[l + i];
        
     for(int i = 0; i < n2; i++)
        ar[i] = arr[m + 1 + i];
        
    int i = 0, j = 0, k = l;
    
    while(i < n1 && j < n2){
        if(al[i] <= ar[j])
            arr[k++] = al[i++];
        
        else
            arr[k++] = ar[j++];
    }
        
    while(i < n1)
        arr[k++] = al[i++];
    
    while(j < n2)
        arr[k++] = ar[j++];
}
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) 
        return;
        int m = l + (r-l)/2 ; 
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r); 
    }
};
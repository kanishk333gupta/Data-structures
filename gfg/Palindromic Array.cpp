//https://practice.geeksforgeeks.org/problems/palindromic-array-1587115620/1#

int PalinArray(int a[], int n)
{  
    //add code here.
    
    for(int i = 0 ; i<n ; i++){
        int res =0;
        int num =a[i];
        while(num>0){
            int temp = num%10;
            num = num/10;
            res = temp + res*10;
        }
        if(res!=a[i]) return 0; 
    }return 1;


}
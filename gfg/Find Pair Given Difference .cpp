//https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1#


bool findPair(int arr[], int size, int n){
    //code
    // int count = 0 ;
    // for(int i = 0 ; i <size ; i++){
    //     for(int j = 0 ; j < size ; j++){
    //         if((arr[i]-arr[j]) == n) return true;
    //     }
    // }return false;
    
    int i=0, j=0;
    sort(arr,arr+size);
    while(i<size && j<size){
        if((arr[i]-arr[j]) == n) return true;
        else if ((arr[i]-arr[j])>n) j++;
        else i++;
    }return false;
    
}
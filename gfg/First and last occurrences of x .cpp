//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1


vector<int> find(int arr[], int n , int x )
{
    vector<int> v ;
    vector<int> z{-1,-1} ;
    for (int i = 0  ; i < n  ; i++){
        if(arr[i] == x ){
        v.push_back(i) ;
        break ;
        }
    }
    for (int i = n-1 ; i > 0 ; i--){
        if(arr[i] == x ){
        v.push_back(i) ;
        break ;
        }
    }
    return ((v.size()!=0) ? v : z);
        // int first =0 , last = 1 ; 
        // while()
        // if(arr[i] == x && arr[i-1] != x ) 
        // if(arr[i] == x && arr[i-1] != x ) 
        // v.push_back(i-1);
        // if (arr[i] != x && arr[i-1]==x)
    
}
//https://leetcode.com/problems/minimum-operations-to-make-array-equal/submissions/

    int minOperations(int n) {
        int res = 0;
        // vector<int>a;
        // for(int i = 0 ; i<n;i++){
        //     a[i]=2*i + 1;
        // }
//         if(n%2==0){
//             res = n/2*n/2;
//         }
//         else{
//             res =n/2*(n/2+1);
//         }
        
        return n*n/4 ;
    }
};
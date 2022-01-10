//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1#
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        int *ans = new int[2];
        for(int i = 0 ; i < n ; i++){
            if(arr[abs(arr[i])-1]>0) arr[abs(arr[i])-1]=-1*arr[abs(arr[i])-1];
            else ans[0]=abs(arr[i]);
        }
        for(int i = 0 ; i < n ; i++){
            if(arr[i]>0)ans[1]=i+1;
        }
        // unordered_map<int,int>mp;
        // for(int i = 0 ; i < n+1 ; i++){
        //     mp[arr[i]]++;            
        // }
        // for(int i = 0 ; i < n ; i++){
        //     if(mp[arr[i]]>1)ans[0]=arr[i];            
        // }
        // for(int i = 1 ; i < n+1 ; i++){
        //     if(mp[i]==0){ans[1]=i;break;   }         
        // }
        return ans ;
    }
};

//https://leetcode.com/problems/can-place-flowers/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int p = flowerbed.size();
        int c=0;
        
        for(int i = 0 ; i < flowerbed.size();i++){
            if(flowerbed[i]==0) {
                int pre =(i== 0 || flowerbed[i - 1] == 0) ? 0 : 1;
                int ne = (i== flowerbed.size()-1 || flowerbed[i + 1] == 0) ? 0 : 1;
                
                
                if(pre==0 && ne==0){
                    flowerbed[i]=1;
                    c++;
                }
            }
        }
        return  c>=n;
        // return false ;
    }
};
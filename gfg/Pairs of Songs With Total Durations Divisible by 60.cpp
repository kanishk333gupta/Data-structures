//https://leetcode.com/problems/pairs-of-songs-with-total-durations-divisible-by-60/

class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int>v(60,0) ;
        int res = 0;
        int n = time.size();
        for(int  i = 0 ; i < n ; i++){
            int a =time[i]%60;
            if(a==0) res +=v[0];
            else res +=v[60-a];
            v[a]++;
        }
        return res ;
        
    }
};
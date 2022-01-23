//https://leetcode.com/problems/check-if-all-as-appears-before-all-bs/

class Solution {
public:
    bool checkString(string s) {

	 for(int i = 0 ; i<s.size() ; i++){
            if(s[i]=='b' && s[i+1]=='a') return false ;
        }
        return true;



        // for(int i = 0 ; i<s.size() ; i++){
        //     if(s[i]=='b') {
        //         sort(s[i],s.end());
        //         return find(s[i], s.end(), 'a');
        //         }
        //     }
        // for(int i = 0 ; i<s.size() ; i++){
        //     if(s[i]=='b') sort(s[i],s.end());
        // }



//        return is_sorted(s.begin(),s.end());
    }
};
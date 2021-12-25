//https://leetcode.com/problems/reverse-string/submissions/

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char>p;
        
        for(int i =s.size()-1 ; i >=0 ; i--){
            p.push_back(s[i]);
        }s=p;
    }
};
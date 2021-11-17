#https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1/#


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool match(char a , char b){
        return (a=='{'&& b=='}' || a=='('&& b==')' || a=='['&& b==']') ;
        // else return false;
    }
    bool ispar(string x)
    {
        // Your code here
        stack<int>s;
        for(int i = 0 ; i < x.size() ; i++){
            if(x[i]=='{'|| x[i]=='[' || x[i]=='(') s.push(x[i]);
            else{
                if(s.empty()) return false ;
                else if(match(s.top(),x[i])==false) return false;
                else s.pop();
        }
        }if(s.empty()) return true;
    }

};
//https://practice.geeksforgeeks.org/problems/palindrome-string0817/1#

class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
        if(S.size()==1) return 1;
	    string p ="";
	    for(int i = S.size()-1 ; i >=0 ; i--) p.push_back(S[i]);
	    return p==S ? 1:0;
	}

};
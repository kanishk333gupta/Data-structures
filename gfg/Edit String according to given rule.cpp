// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to proofread the spells
string proofreadSpell(string& strin)
{
	string temp = "";
	int j = 0;
	for (int i = 0 ; i< strin.length() ; i++) {
		if (strin[j+1]=='r' && strin[j-1]=='s') {
          		j++;
		}
		temp+=strin[j++];
		}
	string resultStr = "";
	for (char c : temp) {
		resultStr += c;
	}
	return resultStr;
}

// Driver Code
int main()
{
	// Given string str
	string str = "sursreser";

	// Function Call
	cout << proofreadSpell(str);
}

// C++ program to find difference of two large numbers. 
#include <bits/stdc++.h> 
using namespace std; 

// Returns true if str1 is smaller than str2, 
// else false. 
bool isSmaller(string str1, string str2) 
{ 
	// Calculate lengths of both string 
	int n1 = str1.length(), n2 = str2.length(); 

	if (n1 < n2) 
		return true; 
	if (n2 < n1) 
		return false; 

	for (int i = 0; i < n1; i++) { 
		if (str1[i] < str2[i]) 
			return true; 
		else if (str1[i] > str2[i]) 
			return false; 
	} 
	return false; 
} 

// 5 5 14
// 5 2 3 

void solve(){
	
}

// Driver code 
int main() 
{ 
	
}

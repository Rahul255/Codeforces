#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{ 
	string s, r; 
	int i; 
	std::cin >> s; 
	for (i=0;i<=s.length()-1;i++) 
	{ 
		char c=s[i]; 
		if (c >= 'A' && c <= 'Z') 
		{ 
			c =c+32; 
		} 
		if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') 
		{ 
			cout<<"."; cout<<c; 
		} 
	}
 	cout << r << endl; 
	return 0;

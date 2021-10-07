#include <bits/stdc++.h>
using namespace std;
void printSubsequence(string input, string output)
{
	if (input.empty()) {
 if(output=="BAZINGA"){
  cout<<"YES";
  exit(0);
 }
		return;
	}
	printSubsequence(input.substr(1), output + input[0]);
	printSubsequence(input.substr(1), output);
}
int main()
{
	string output = "";
	string input = "dirtiorejitor";
	printSubsequence(input, output);
cout<<"NO";
	return 0;
}

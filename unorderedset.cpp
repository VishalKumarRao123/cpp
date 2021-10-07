#include<bits/stdc++.h>
using namespace std;
int main()
{
 unordered_set<string>us;
 int n;
 cout<<"How many string you want to Enter : ";
 cin>>n;
 while(n--)
 {
  string str;
  cin>>str;
  us.insert(str);
 }
 string s;
 cout<<"Enter a string to search :- ";
 cin>>s;
 if(us.find(s)!=us.end())
  cout<<s<<"  is found !";
 else
  cout<<"Not Found !";
 return 0;
}
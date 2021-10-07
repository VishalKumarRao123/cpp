#include<bits/stdc++.h>
using namespace std;
int main()
{
 unordered_map<string,int>um;
 int n;
 cout<<"How many words you want to enter";
 cin>>n;
 while(n--)
 {
  string str;
  cin>>str;
  um[str]++;
 }
 for(auto val : um)
  cout<<val.first<<" "<<val.second<<endl;
 return 0;
}
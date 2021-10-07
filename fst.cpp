#include<bits/stdc++.h>
using namespace std;
int main()
{
	unordered_map<int,string>m;
	m[1] = "vishal";
	m[7] = "Ankit";
	m[4]  = "manish";
	m[11]   = "Roushan";
 m[11] = "eleven";
	for(auto val : m)
		cout<<val.first<<" "<<val.second<<endl;
  auto it  = m.find(46);
  if(it!=m.end())
   cout<<it->second;
   else
   cout<<"Not Found";
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(pair<int,int>a,pair<int,int> b)
{
 if(a.first==b.first)
 {
  if(a.second<b.second) return true;
  return false;
 }
 else{
  if(a.first>b.first)
  return true;
  return false;
 }
  
}
int main()
{
 int n;
 cin>>n;
 vector<pair<int,int>>v;
 for(int i=0;i<n;i++)
 {
  int f,s;
  cin>>f>>s;
  v.push_back({f,s});
 }
 for(int i=0;i<n-1;i++)
 {
  for(int j=0;j<n-1;j++)
  {
   if(should_i_swap(v[j],v[j+1]))
     swap(v[j],v[j+1]);
  }
 }
 for(auto ele : v)
 cout<<ele.first<<" "<<ele.second<<endl;
 return 0;
}
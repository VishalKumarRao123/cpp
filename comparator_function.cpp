#include<bits/stdc++.h>
using namespace std;
bool should_i_swap(int a,int b)
{
 if(a>b)
  return true;
  return false;
}
int main()
{
 int n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++)
 {
  int ele;
  cin>>ele;
  v.push_back(ele);
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
 cout<<ele<<" ";
 return 0;
}
#include<bits/stdc++.h>
using namespace std;
void nge(vector<int>&v)
{
  vector<int>ans;
  stack<int>s;
  for(int i=v.size()-1;i>=0;i--)
  {
   if(!s.empty())
   {
      if(s.top()>v[i])
      {
       ans.push_back(s.top());
       s.push(v[i]);
      }
      else{
       while(!s.empty() && s.top()<=v[i])
        s.pop();
       if(!s.empty()){
         ans.push_back(s.top());
         s.push(v[i]);}
         else{
          s.push(v[i]);
          ans.push_back(-1);
         }
      }
   }
   else{
     ans.push_back(-1);
     s.push(v[i]);
   }
  }
  for(int i=v.size()-1;i>=0;i--)
    cout<<ans[i]<<" ";
}
int main()
{
 vector<int>v;
 for(int i=0;i<5;i++)
 {
  int ele;
  cin>>ele;
  v.push_back(ele);
 }
 nge(v);
 return 0;
}
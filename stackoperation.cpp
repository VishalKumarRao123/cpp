#include<bits/stdc++.h>
using namespace std;
int main()
{
 int n;
 cin>>n;
 queue<vector<int>>q;
 vector<int>v;
 for(int i=0;i<n;i++)
 {
  int ele;
  cin>>ele;
 v.push_back(ele);
 }
 q.push(v);
 while(!q.empty())
 {
  for(auto val : q.front())
   cout<<val;
  q.pop();
 }
 
}
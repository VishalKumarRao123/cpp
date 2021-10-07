#include<bits/stdc++.h>
using namespace std;
void func(vector<int>&v,int idx, int k){
 if(v.size()==1){
  cout<<endl<<v[0];
  return ;
 }
 cout<<"i am in";
 idx=(idx+k)%v.size();
 v.erase(v.begin()+idx);
 func(v,idx,k);
 return ; 
}
int main()
{
 int n,k;
 cin>>n>>k;
 vector<int>v;
 for(int i=1;i<=n;i++)
  v.push_back(i);
 for(auto val : v)
 cout<<val<<" ";
 func(v,0,k-1);
 return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--){
  int a,b,c;
  cin>>a>>b>>c;
  unordered_map<int,int>um;
  um[a]++;
  um[b]++;
  um[c]++;
  if(um[0]>=1&&um[1]>=1)
    cout<<"1"<<endl;
  else
   cout<<"0"<<endl;}
  return 0;
}
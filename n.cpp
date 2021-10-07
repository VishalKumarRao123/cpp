#include<bits/stdc++.h>
using namespace std;
int main()
{
 unordered_set<string>v;
 int n;
 cin>>n;
 for(int i=0;i<n;i++)
 {
  string st;
  cin>>st;
  auto it   = v.find(st);
  if(it==v.end()){
   v.insert(st);
   cout<<"ok"<<endl;}
   else
   {
    for(int i=1;i<n;i++){
    ostringstream strg;
    strg<<i;
    string s1 = strg.str();
    string temp = st+s1;
    auto it   = v.find(temp);
   if(it==v.end()){
   v.insert(temp);
   cout<<temp<<endl;
   break;}
   }
 }
 }
 return 0;
}
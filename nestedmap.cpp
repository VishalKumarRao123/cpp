#include<bits/stdc++.h>
using namespace std;
void print(map<pair<string,string>,vector<int> >&m)
{
 auto it = m.begin();
 cout<<(it->first).first<<" "<<(it->first).second<<":";
 vector<int>&v=it->second;
 for(int i=0;i<v.size();i++)
 {
   cout<<v[i]<<" ";
 }
}
int main()
{
 map<pair<string,string>,vector<int> >m;
 string f,l;
 cin>>f>>l;
 int n;
 cin>>n;
 vector<int>v;
 for(int i=0;i<n;i++)
 {
  int num;
  cin>>num;
  v.push_back(num);
 }
 m[{f,l}] = v;
 print(m);
 return 0;
}
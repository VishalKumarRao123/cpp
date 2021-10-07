#include<bits/stdc++.h>
using namespace std;
int main()
{
 // vector<int>v{1,3,2};
 // sort(v.begin(),v.end());
 // do{
 //   cout<<v[0]<<v[1]<<v[2]<<endl;
 // }while(next_permutation(v.begin(),v.end()));
 // vector<pair<int,string>>vp;
 // vp.push_back({1,"Vishal"});
 // vp.push_back({1,"ankit"});
 // vp.push_back({3,"Vishal"});
 // for(int i=0;i<vp.size();i++)
 //   cout<<vp[i].first<<" "<<vp[i].second<<endl;
//  string str="loveeetcode";
//  cout<<str;
//  auto it = find(str.begin()+1,str.end(),'l');
// if(it==str.end())
// cout<<"yes";
unordered_map<int,int>um;
vector<pair<int,int>>vp;
vp.push_back({0,2});
vp.push_back({0,3});
vp.push_back({0,4});
for(auto val : vp)
{
 cout<<val.first<<" "<<val.second<<endl;
}
  return 0;
}
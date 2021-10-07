 #include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int> b)
{
 if(a.first==b.first)
 {
    return a.second>b.second;
 }
 else{
  return a.first<b.first;
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
  sort(v.begin(),v.end(),cmp);
 for(auto ele : v)
 cout<<ele.first<<" "<<ele.second<<endl;
 return 0;
}
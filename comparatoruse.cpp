#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<string,int>a,pair<string,int>b)
{
  if(a.second==b.second)
  return a.first < b.first;
  else
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<string,int>>v;
    for(int i=0;i<n;i++)
    {
        string name;
        int marks;
        cin>>name;
        cin>>marks;
        v.push_back({name,marks});
    }
    for(auto val : v)
        cout<<val.first<<val.second;
    sort(v.begin(),v.end(),cmp);
    for(auto ele : v)
    {
        cout<<ele.first<<" "<<ele.second<<endl;
    }
}
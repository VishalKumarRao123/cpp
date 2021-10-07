#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
  return a.first<b.first;
}
int main()
{
 unordered_map<int,int>um;
 um[5]++;
 um[35]++;
 um[325]++;
 um[-5]++;
 um[98]++;
 um[90]++;
 um[-45]++;
 um[50]++;
 sort(um.begin(),um.end(),cmp);
 for(auto val : um)
   cout<<val.first<<" ";
 return 0;
}
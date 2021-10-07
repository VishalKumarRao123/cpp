#include<bits/stdc++.h>
using namespace std;
void insert(vector<int>&v,int temp)
{
   if(v.size()==0||v.back()<=temp)
   {
    v.push_back(temp);
    return ;
   }
   int val = v.back();
   v.pop_back();
   insert(v,temp);
   v.push_back(val);
}
void sort(vector<int>&v)
{
    if(v.size()==0)
       return ;
    int temp = v[v.size()-1];
      v.pop_back();
    sort(v);
   insert(v,temp);
}
int main()
{
 vector<int>v{1,3,0,5,6,-5};
 sort(v);
 for(auto val : v)
     cout<<val<<" ";
    return 0;
}
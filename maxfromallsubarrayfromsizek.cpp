#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>arr{8,5,7,78879,89,65,56,6565,56,67,78,67,54,999};
  int size=3;
  for(auto ele : arr)
  cout<<ele<<" ";
  cout<<endl;
  int j=0,mx=0;
  list<int>l;
  while(j<size)
  {
     if(!l.empty())
     {
        if(arr[j]<l.back())
           l.push_back(arr[j]);
         else{
          while(!l.empty()&&l.back()<=arr[j])
             l.pop_back();
          l.push_back(arr[j]);
         }
     }
     else
       l.push_back(arr[j]);
       j++;
  }
  j--;
  vector<int>ans;
  int i=0;
  while(j <  arr.size())
  {
     ans.push_back(l.front());
     if(arr[i]==l.front())
        l.pop_front();
       i++;
      j++;
      if(!l.empty())
     {
        if(arr[j]<l.back())
           l.push_back(arr[j]);
         else{
          while(!l.empty()&&l.back()<=arr[j])
             l.pop_back();
          l.push_back(arr[j]);
         }
     }
     else
       l.push_back(arr[j]);
  }
  for(auto ele : ans)
    cout<<ele<<" ";
 return 0;
}
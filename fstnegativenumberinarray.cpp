#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>v{12,-1,-7,8,-15,30,16,28};
 int size=3,i,j;
 queue<int>q;
 i=j=0;
 while(j<3)
 {
  if(v[j]<0)
     q.push(v[j]);
     j++;
 }
 j--;
 while(j<v.size())
 {
  if(q.size()==0)
      cout<<"0"<<" ";
  else
    cout<<q.front()<<" ";
   if(q.front()==v[i])
    q.pop();
   i++;
   j++;
   if(v[j]<0)
   q.push(v[j]);
 }
 return 0;
}
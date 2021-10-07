#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>v{4,1,1,1,2,3,5,1,4};
 int sum=0,k=5;
 int i=0,j=0,mx=0;
 for(int j=0;j<v.size();j++)
 {
  sum+=v[j];
 
  if(sum>k)
  {
   while(sum>k)
   {
    sum-=v[i];
    i++;
   }
  }
   if(sum==k){
   mx=max(mx,j-i+1);
    for(int k=i;k<=j;k++)
       cout<<v[k]<<",";
    cout<<endl;}
 }
 cout<<"size is : "<<mx;
  return 0;
}
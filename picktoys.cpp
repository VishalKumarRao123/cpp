#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str="abbbccabc";
 int k=2,i=0,mx=0;
 unordered_map<char,int>um;
 for(int j=0;j<str.size();j++)
 {
   um[str[j]]++;
   if(um.size()>k)
   {
    while(um.size()>k){
      if(um[str[i]]==1)
         um.erase(str[i]);
      else
        um[str[i]]--;
        i++;}
   }
   else if(um.size()==k)
      mx=max(mx,j-i+1);
 }
 cout<<mx;
 return 0;
}
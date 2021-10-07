#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str="pwwkew";
 int i=0,j=0,mx=0;
 unordered_map<char,int>um;
 for(j=0;j<str.size();j++)
 {
    // if(!um.empty())
    //    if(um[str[j]]==1)
    //    {
    //     mx=max(mx,j-i);
    //     for(int k=i;k<j;k++)
    //      cout<<str[k];
    //      cout<<endl;
    //     while(str[i]!=str[j]){
    //       um.erase(str[i]);
    //       i++;}
    //      um.erase(str[i]);
    //      i++;
    //    }
    //    um[str[j]]++;
    // }
    // else
    //   um[str[j]]++;
     um[str[j]]++;
    if(um.size()==j-i+1)
        mx=max(mx,j-i+1);
   else  if(um.size()<j-i+1)
    {
     while(um.size()<j-i+1){
     if(um[str[i]]==1)
        um.erase(str[i]);
     else
       um[str[i]]--;
     i++;
    }}
  
 }
 cout<<mx;
 return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
   string str="aababcbebebecba";
   int k=3,mx=0,i=0;
   unordered_map<char,int>um;
   for(int j=0;j<str.size();j++)
   {
      um[str[j]]++;
      if(um.size()>k)
      {
        while(um.size()>k)
        {
         if(um[str[i]]==1)
            um.erase(str[i]);
         else
            um[str[i]]--;
         i++;
         }
        }
      if(um.size()==k)
      { 
         mx=max(mx,j-i+1);
         for(int k=i;k<=j;k++)
          cout<<str[k];
          cout<<" : "<<j-i+1<<endl;
      }
   }
   cout<<mx;
       return 0;
}
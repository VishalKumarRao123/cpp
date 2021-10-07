#include<bits/stdc++.h>
using namespace std;
int main()
{
   string str,s;
   string temp="";
   cout<<"Enter String :-";
   cin>>str;
   cout<<"Enter string for anagram search :";
   cin>>s;
   unordered_map<char,int>ums;
   for(char ch : s)
      ums[ch]++;
   int j;
  
   for(j=0;j<s.size();j++){
       temp+=str[j];
   }
   j--;
   int count=0;
   while(j<str.size())
   {
       unordered_map<char,int>umtemp;
      for(char ch : temp)
         umtemp[ch]++;
      if(ums==umtemp)
      {
         count++;
         cout<<temp<<" ";
      }
      temp.erase(temp.begin());
      j++;
      temp+=str[j];
   }
   cout<<endl<<count<<"Anagrams !";
   return 0;
}
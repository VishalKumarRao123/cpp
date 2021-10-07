#include<bits/stdc++.h>
using namespace std;
int main()
{
 string str="ADOBECODEBNCAC";
 string s= "ABC";
 unordered_map<char,int>um;
 for(char ch : s)
   um[ch]++;
 int count,i=0,len;
 len= str.size();
   count = s.size();
 for(int j=0;j<str.size();j++)
 {
    if(um.find(str[j])!=um.end()){
         um[str[j]]--;
         if(um[str[j]]==0)
            count--;
         }
     if(count==0)
     {
       len=min(len,j-i+1);
       for(int k=i;k<=j;k++)
         cout<<str[k];
        cout<<endl;
       while(count==0&&i<j)
       {
        if(um.find(str[i])!=um.end())
        {
           um[str[i]]++;
           if(um[str[i]]>0){
              count++;
             }
        }
        i++;
       }
       for(int k=i-1;k<=j;k++)
         cout<<str[k];
        cout<<endl;
       len=min(len,j-i+2);
     }
 }
 cout<<len;
 return 0;
}
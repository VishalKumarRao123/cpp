#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int t;
 cin>>t;
 while(t--){
  string str;
  cin>>str;
  unordered_map<char,int>v;
  unordered_map<char,int>c;
  for(int i=0;i<str.size();i++){
   str[i]=(str[i]|(' '));
   if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
       v[str[i]]++;
   else
     c[str[i]]++;
  if(v.size()!=0&&c.size()==0)
       cout<<v.size()-1;
  else if (v.size()==0&&c.size()!=0)
       cout<<c.size()-1;
  int vs=v.size();
  int cs=c.size();
  

  {
   
  }
  }
 }
 return 0;
}

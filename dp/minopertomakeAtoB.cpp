#include<bits/stdc++.h>
using namespace std;
int  func(string s1,string s2){
 int l1=s1.length();
 int l2=s2.length();
 int t[l1+1][l2+1];
 for(int i=0;i<l1+1;i++){
  for(int j=0;j<l2+1;j++){
   if(i==0||j==0)
     t[i][j]=0;
  }
 }
 for(int i=1;i<l1+1;i++){
  for(int j=1;j<l2+1;j++){
   if(s1[i-1]==s2[j-1])
      t[i][j]=1+t[i-1][j-1];
   else
     t[i][j]=max(t[i-1][j],t[i][j-1]);
  }
 }
 int lcs = t[l1][l2];
 int ans = l1+l2-(2*lcs);
 return ans;
}
int main(int argc, char const *argv[])
{
 string s1,s2;
 cin>>s1>>s2;
 cout<<func(s1,s2);
 return 0;
}

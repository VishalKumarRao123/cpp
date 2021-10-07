#include<bits/stdc++.h>
using namespace std;
int t[1001][1001];
void printLCS(string s1,string s2){
 string s;
   int i = s1.length();
   int j=s2.length();
   while(i>0||j>0){
    if(s1[i-1]==s2[j-1]){
     s.push_back(s1[i-1]);
     i--;
     j--;
    }
    else{
     if(t[i-1][j]>t[i][j-1])
         i--;
     else
       j--;
    }
   }
   reverse(s.begin(),s.end());
   cout<<"\nLongest Subsequence is : "<<s;
}
int lcs(string s1,string s2){
 int x=s1.length();
 int y=s2.length();
 for(int i=0;i<x+1;i++){
  for(int j=0;j<y+1;j++){
   if(i==0||j==0)
     t[i][j]=0;
  }
 }
 for(int i=1;i<x+1;i++){
  for(int j=1;j<y+1;j++){
   if(s1[i-1]==s2[j-1])
     t[i][j]=1+t[i-1][j-1];
   else
     t[i][j]=max(t[i-1][j],t[i][j-1]);
  }
 }
 return t[x][y];
}
int main(int argc, char const *argv[])
{
 string s1,s2;
 cin>>s1>>s2;
 cout<<"Length of Longest Common Subsequences is :-"<<lcs(s1,s2);
 printLCS(s1,s2);
 return 0;
}

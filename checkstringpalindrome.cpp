#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N][26];
int main(int argc, char const *argv[])
{
 string s;
 cin>>s;
 int n=s.size();
 for(int i=0;i<n;i++)
     arr[i+1][s[i]-'a']++;
 for(int i=1;i<=n;i++){
  for(int j=0;j<26;j++)
     cout<<arr[i][j]<<" ";
  cout<<endl;
 }
 for(int i=1;i<=n;i++){
    for(int j=0;j<26;j++){
        arr[i][j]+=arr[i-1][j];
    }
 }
 for(int i=1;i<=n;i++){
  for(int j=0;j<26;j++)
     cout<<arr[i][j]<<" ";
  cout<<endl;
 }
 int oc=0;
 int l,r;
 cin>>l>>r;
 for(int i=0;i<26;i++){
  int count=arr[r][i]-arr[l-1][i];
  if(count&1)
    oc++;
 }
 if(oc>1)
    cout<<"Not Palindrome !";
 else
  cout<<"Palindrome !";
 return 0;
}

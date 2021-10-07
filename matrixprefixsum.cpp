#include<bits/stdc++.h>
using namespace std;
const int N=1e3+10;
int arr[N][N];
int ans[N][N];
int main(){
 int n=3;

 for(int i=1;i<=n;i++)
 {
  int sum=0;
  for(int j=1;j<=n;j++){
     cin>>arr[i][j];
     ans[i][j]=arr[i][j]+ans[i][j-1]+ans[i-1][j]-ans[i-1][j-1];}
 }
 for(int i=0;i<=n;i++)
 {
  for(int j=0;j<=n;j++)
     cout<<ans[i][j]<<" ";
  cout<<endl;
 }
 int q=2;
 while(q--){
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int res=0;
  res=ans[c][d]-ans[c][b-1]-ans[a-1][d]+ans[a-1][b-1];
  cout<<res<<endl;
  }
}
#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int main(int argc, char const *argv[])
{
 vector<int>v(N,0);
 int n;
 cin>>n;
 int arr[n];
 for(int i=0;i<n;i++){
  cin>>arr[i];
  v[arr[i]]++;
 }
 int t;
 cin>>t;
 while(t--){
  int q;
  cin>>q;
  cout<<q<<" : "<<v[q]<<endl;
 }
 return 0;
}

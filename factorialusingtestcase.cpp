#include<bits/stdc++.h>
using namespace std;
const int m=1e9+7;
const int n=1e5+10;
long long fact[n];
// int factorial(int n){
//  if(n==0)
//     return 1;
//  return (n*factorial(n-1))%m;
// }
int main(int argc, const char** argv) {
 fact[0]=fact[1]=1;
 for(int i=2;i<n;i++){
  fact[i]=(i*fact[i-1])%m;
 }
  int t;
  cin>>t;
  while(t--){
   int n;
   cin>>n;
   cout<<n<<" : "<<fact[n]<<endl;
  }
   return 0;
}
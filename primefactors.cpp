#include<bits/stdc++.h>
using namespace std;
int arr[100];
//int binaryexp(int a,int b){
//  int ans=1;
//  while(b){
//   if(b&1){
//    ans*=a;
//   }
//   a=a*a;
//   b=b>>1;
//  }
//  return ans;
// }
int main(int argc, char const *argv[])
{
  int n=12;
  vector<int>v;
  for(int i=2;i*i<=n;i++){
   while(n%i==0){
    v.push_back(i);
    n/=i;
    arr[i]++;
   }
  }
  if(n>1)
    v.push_back(n);
  for(int val : v)
     cout<<val<<" "<<arr[val]<<endl;
 int mult=1,add=1;
 for(int i=2;i<=v.back();i++){
     if(arr[i]>0)
       mult = mult*(arr[i]+1);     
 }
 cout<<"total divisor : -"<<mult;
 return 0;
}




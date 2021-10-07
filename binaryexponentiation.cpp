#include<bits/stdc++.h>
using namespace std;
const int M = 1e7+9;
int power(int a ,int b){
 /*By Recursive
 if(b==0)
   return 1;
 int ans =  power(a,b>>1);
 if(b&1)
  return a*(ans*1LL*ans);
 else 
 //   return (ans*1LL*ans);*/
 int ans=1;
 while(b){
  if(b&1){
   ans=ans*a;
  }
  b=b>>1;
  a=a*a;
  
 }
 return ans;
}
int main(int argc, char const *argv[])
{
 int t=1;
 while(t--){
   cout<<(power(2,10));
 }
 return 0;
}




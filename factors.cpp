#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n=16,i;
 int ct=0,sum=0;
 for(i=1;i*i<=n;i++){
     if(n%i==0){
      cout<<i<<" "<<n/i<<endl;
      ct++;
      sum+=i;
      if(i*i!=n){
       ct++;
       sum+=n/i;
      }
     }
 }
 cout<<ct<<" "<<sum;
 return 0;
}

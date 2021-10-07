#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;
 int count=0;
 // while(n){
 //   if(n&1)
 //      count++;
 //      n=n>>1;
 // }
 while(n){
  n=n&(n-1);
     count++;
 }
 cout<<count;
 return 0;
}

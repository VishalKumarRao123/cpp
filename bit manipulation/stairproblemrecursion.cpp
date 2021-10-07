#include<bits/stdc++.h>
using namespace std;
void func(int n ,int o,int tw,int th,int &count){
 if(n==0){
    count++;
  return ;
 }
 if(n>=3){
  int tn=n;
  func(tn-1,o+1,tw,th,count);
  func(tn-2,o,tw+2,th,count);
  func(tn-3,o,tw,th+3,count);
 }
 else if(n==2){
  int tnn=n;
  func(tnn-1,o+1,tw,th,count);
  func(tnn-2,o,tw+2,th,count);
 }
 else if(n==1){
  int tnnn=n;
  func(tnnn-1,o+1,tw,th,count);
 }
 
}
int main(int argc, char const *argv[])
{
 int n;
 cin>>n;
 int count=0;
 func(n,1,2,3,count);
 cout<<"No of steps : "<<count;
 return 0;
}

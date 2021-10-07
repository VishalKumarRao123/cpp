#include<bits/stdc++.h>
using namespace std;
void func(string ip ,string op)
{
 if(ip.size()==0){
  cout<<op<<" ";
  return ;
 }
 string op1=op;
 string op2=op;
 string o=op;
 if(ip[0]<65){
 o.push_back(ip[0]);
 ip.erase(ip.begin());
 func(ip,o);
 }
 else{
 op1.push_back(toupper(ip[0]));
 op2.push_back(ip[0]);
 ip.erase(ip.begin());
 func(ip,op1);
 func(ip,op2);}
 return ;
}
int main()
{
 string ip;
 cin>>ip;
 string op=" ";
 transform(ip.begin(),ip.end(),ip.begin(),::tolower);
 func(ip,op);
 return 0;
}
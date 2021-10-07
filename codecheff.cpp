#include<bits/stdc++.h>
using namespace std;
void func(string op,int n){
 if(op.size()==n){
  cout<<op<<" ";
  return;
 }
 string op1=op;
 op1.push_back('1');
 func(op1,n);
 string op2=op;
 op2.push_back('0');
 func(op2,n);
  return ;
}
int main(){
 int n;
 cin>>n;
 string op="";
 func(op,n);
 return 0;
}
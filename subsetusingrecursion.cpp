#include<bits/stdc++.h>
using namespace std;
int i=0;
void func(string str,string op){
 if(str.size()==0){
  cout<<op<<endl;
  return;
 }
 string op1=op;
 string op2=op;
 op1.push_back(str[0]);
 str.erase(str.begin());
 func(str,op1);
 func(str,op2);
}
int main(int argc, char const *argv[])
{
 string str;
 cin>>str;
 string op="";
 cout<<i<<endl;
 func(str,op);
 return 0;
}

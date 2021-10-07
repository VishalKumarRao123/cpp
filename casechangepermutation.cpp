#include<bits/stdc++.h>
using namespace std;
void casechange(string ip,string op){
 if(ip.size()==0){
  cout<<op<<" ";
  return ;
 }
 string op1=op;
 string op2=op;
 op1.push_back(toupper(ip[0]));
 op2.push_back(ip[0]);
 ip.erase(ip.begin());
 casechange(ip,op1);
 casechange(ip,op2);
 return;
}
int main()
{
 string inp;
 cin>>inp;
 string op="";
 casechange(inp,op);
  return 0;
}
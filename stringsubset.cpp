#include<bits/stdc++.h>
using namespace std;
vector<string>v;
void subset(string inp,string op)
{
 if(inp.size()==0){
    v.push_back(op);
      return;
 }
 string op1=op;
 string op2=op;
 op2.push_back(inp[0]);
 inp.erase(inp.begin());
 subset(inp,op1);
 subset(inp,op2);
 return;
}
int  main(int argc, const char** argv) {
 string in;
 cin>>in;
 string op=" ";
 subset(in,op);
 sort(v.begin(),v.end());
 for(string s : v)
    cout<<s<<" ";
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
void generateParenthesis(string op,int o,int c)
{
 if(o==0&&c==0)
 {
    cout<<op<<" ";
    return ;
 }
 if(o!=0)
 {
    string op1=op;
    op1.push_back('(');
    generateParenthesis(op1,o-1,c);
 }
 if(c>o){
  string op2=op;
  op2.push_back(')');
  generateParenthesis(op2,o,c-1);
 }
 return ;
}
int main()
{
 int n;
 cin>>n;
 string op="";
 generateParenthesis(op,n,n);
 return 0;
}
#include<bits/stdc++.h>
using namespace std;
void generateParenthesis(string op,int o,int z,int n)
{
 if(n==0)
 {
    cout<<op<<" ";
    return ;
 }
 string op1=op;
    op1.push_back('1');
    generateParenthesis(op1,o+1,z,n-1);
 if(z<o){
  string op2=op;
  op2.push_back('0');
  generateParenthesis(op2,o,z+1,n-1);
 }
 
 return ;
}
int main()
{
 int n;
 cin>>n;
 string op="";
 generateParenthesis(op,0,0,n);
 return 0;
}
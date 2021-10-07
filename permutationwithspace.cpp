#include<bits/stdc++.h>
using namespace std;
void permutation(string ip,string op)
{
   if(ip.size()==0)
   {
    cout<<op<<endl;
    return ;
   }
   string op1=op;
   string op2=op;
   op2.push_back(ip[0]);
   op1.push_back('_');
   op1.push_back(ip[0]);
   ip.erase(ip.begin());
   permutation(ip,op2);
   permutation(ip,op1);
   return ;
}
int main()
{
 string ip,op;
 cin>>ip;
 op.push_back(ip[0]);
 ip.erase(ip.begin());
 permutation(ip,op);
 return 0;
}
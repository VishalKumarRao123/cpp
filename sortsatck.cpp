#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int temp)
{
   if(s.size()==0||s.top()>=temp){
      s.push(temp);
      return ;}
   int val = s.top();
   s.pop();
   insert(s,temp);
   s.push(val);
}
void sort(stack<int>&s)
{
 if(s.size()==0||s.size()==1)
     return;
 int temp=s.top();
 s.pop();
 sort(s);
  insert(s,temp);
}
void reverse(stack<int>&s)
{
 if(s.size()==0)
    return ;
 int temp = s.top();
 s.pop();
 reverse(s);
 s.push(temp);
 cout<<temp<<" ";
}
int main()
{
 stack<int>s;
 s.push(4);
 s.push(3);
 s.push(67);
 s.push(0);
 s.push(-5);
 s.push(23);
 s.push(11);
 sort(s);
 reverse(s);
 while(!s.empty()){
   cout<<s.top()<<" ";
 
  s.pop();
 }
 return 0; 
}
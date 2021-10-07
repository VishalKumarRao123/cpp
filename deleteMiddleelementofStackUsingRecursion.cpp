#include<bits/stdc++.h>
using namespace std;
int p=0,sz;
// void delMiddle(stack<int>&s)
// {
//    if(p==0)
//    {
//     if(s.size()%2==1)
//        sz=s.size()/2+1; 
//      else
//        sz=s.size()/2;
//      p=1;
//    }
//    if(s.size()==sz)
//    {
//      s.pop();
//      return ;
//    }
//    int temp=s.top();
//    s.pop();
//    delMiddle(s);
//    s.push(temp);
// }
void insert(stack<int>&s,int temp)
{
   if(s.size()==0)
   {
    s.push(temp);
    return ;
   }
   int val = s.top();
   s.pop();
   insert(s,temp);
   s.push(val);
}
void reverse(stack<int>&s)
{
   if(s.size()==0||s.size()==1)
       return ; 
   int temp = s.top();
   s.pop();
   reverse(s);
   insert(s,temp);
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
 cout<<endl;
 reverse(s);
 while(!s.empty()){
   cout<<s.top()<<" ";
  s.pop();
 }
 return 0; 
}
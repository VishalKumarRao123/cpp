#include<bits/stdc++.h>
using namespace std;
struct node{
  int val;
  struct node *link;
};
int main()
{
 node *start,*curn;
 start=NULL;
 int i=0;
 while(i<5){
  node *temp = new node;
  cout<<"Enter "<<i+1<<" value :-";
  cin>>temp->val;
  temp->link=NULL;
  if(start==NULL)
  {
   start=temp;
   curn=temp;
  }
  else{
  curn->link=temp;
  curn=temp;}
  i++;
 }
 curn=start;
 while(curn)
 {
  cout<<curn->val<<" ";
  curn=curn->link;
 }
 return 0;
}

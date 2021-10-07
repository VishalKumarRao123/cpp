#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
struct node *next;
 node(int x) {
        data = x;
        next = NULL;}
}*start=NULL,*curn;
void insert()
{
 for(int i=0;i<5;i++)
 {
  cout<<"ENter Number to add :-";
  int x;
  cin>>x;
 struct  node *newnode = new node(x);
  if(start==NULL)
     start=newnode;
  else
    curn->next=newnode;
  curn=newnode;
 }
}
void display()
{
   curn=start;
   while(curn)
   {
    cout<<curn->data<<" ";
    curn=curn->next;
   }
}
void reverse()
{
   node *left,*right;
   left=start;
   right=curn=left->next;
   left->next=NULL;
   while(right)
   {
    right=curn->next;
    curn->next=left;
    left=curn;
    curn=right;
   }
   start=left;
   cout<<endl;
}
int main()
{
 cout<<"i am in main()";
 insert();
 display();
 reverse();
 display();
  return 0;
}
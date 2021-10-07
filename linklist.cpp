#include <iostream>
using namespace std;
struct Node { 
  int data; 
  Node *next; 
};
class LinkedList
{
   public  : Node* head;
  public:
    LinkedList()
    {
      head = NULL;
    }
    void insert(int val)
    {
      Node* new_node = new Node;
      new_node->data = val;
      new_node->next = NULL;
      if (head == NULL)
        head = new_node;
      else
      {
        new_node->next = head;
        head = new_node;
      }
    }
    void display()
    {
      Node* temp = head;
      while(temp != NULL)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }
};
void mergeLists(Node* head1, Node* head2) {
   Node *p,*q,*s,*new_head;
    p=head1;
    q=head2;
    if(p==NULL)
       return ;
    if(q==NULL)
      return ;
      if(p && q){
    if(p->data<=q->data)
    {
        new_head=s=p;
        p=s->next;
    }
    else {
       new_head=s=q;
        q=s->next;
    }}
    while(p && q)
    {
        if(p->data<=q->data)
        {
            s->next=p;
            s=p;
            p=s->next;
        }
        else
        {
            s->next=q;
            s=q;
            q=s->next;
        }
    }
    if(p==NULL)
    {
        s->next=q;
    }
    if(q==NULL)
    {
        s->next=p;
    }
    Node* temp = new_head;
      while(temp != NULL)
      {
        cout << temp->data << " ";
        temp = temp->next;
      }
      cout << endl;
    }
int main() {
  cout<<"Always Enter Values in Decreasing Order !";
  LinkedList l1;
  int n1;
  cin>>n1;
  for(int i=0;i<n1;i++){
    int num;
    cin>>num;
    l1.insert(num);
  }
 cout << "Current Linked List: ";
  l1.display();
  LinkedList l2;
  int n2;
  cin>>n2;
  for(int i=0;i<n2;i++){
    int num;
    cin>>num;
    l2.insert(num);
  }
  cout << "Current Linked List: ";
  l2.display();
   mergeLists( l1.head, l2.head);
}
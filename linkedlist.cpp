//this is a comment
#include<iostream>
using namespace std;
class Node
{
 master
  public:
	  int data;
	  Node *next;//declaring a pointer of node type (pointer is nothing but a variable whic
	  struct node
{
  int item;
  node*next;
}*front,*rear,*newptr,*save,*ptr;
node* create_node(int n)
{
ptr=new node;
ptr->item=n;
ptr->next=NULL;
return ptr;
}
void insert(node*np)
{
if(front==NULL)
front=rear=np;
else
{
rear->next=save;
rear=np;
}
}



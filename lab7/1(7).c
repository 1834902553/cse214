//Define a create function to declare a linked list with four node using dynamic memory allocation.Print the complete linked list after calling create function//
#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
  node *create_list();
  void print_list(node *temp);

  int main()
  {
      node *head=NULL;
      head=create_list();
      print_list(head);
      return 0;
  }
  node *create_list()
  {
      node *a, *b, *c, *d;
      a=(node*)malloc(sizeof(node));
      b=(node*)malloc(sizeof(node));
      c=(node*)malloc(sizeof(node));
      d=(node*)malloc(sizeof(node));
      a->value=10;
      a->next=b;
      b->value=20;
      b->next=c;
      c->value=30;
      c->next=d;
      d->value=40;
      d->next=NULL;
      return a;

  }
  void print_list(node *temp)
  {

      while(temp!=NULL)
      {
          printf("%p\t %d\t %p\n ", temp, temp->value, temp->next);
          temp=temp->next;
      }
      return 0;
  }









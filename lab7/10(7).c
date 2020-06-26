//Copy a linked list into another linked list with a recursive function.Display both list before and after copy//
#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
  node *create_list();

  void print_list(node *temp);
  node *copy_list_recursive(node *list1);

  int main()
  {
      node *head=NULL;
      node *list2=NULL;
      head=create_list();
       print_list(head);
       printf("New list\n\n");
      list2=copy_list_recursive(head);
      print_list(list2);
      return 0;
  }
  node *copy_list_recursive(node *list1){
  if(list1==NULL)
  {
      return NULL;
  }
  node *temp=(node*)malloc (sizeof(node));
  temp->value=list1->value;
  temp->next=copy_list_recursive(list1->next);
  return temp;

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



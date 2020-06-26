
//Define a function to merge two sorted linked list into a sorted linked list.Display all the list before and after mering.(Consider given two linked list are already sorted)//
#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
  node *create_list();

  void print_list(node *temp);
  node *copy_list(node *list1);
   node *merge_list(node *list1, node *list2);

  int main()
  {
      node *list1=NULL;
      node *list2=NULL;
      node *list3=NULL;
      list1=create_list();
      print_list(list1);
      list2=create_list();
      print_list(list2);
      list3=merge_list(list1,list2);
      print_list(list3);
      return 0;
  }
  node *merge_list(node *list1, node *list2)
  {
      node *head, *temp, *new_node;
      head=copy_list(list1);
      temp=head;
      while(temp->next)
      {
          temp=temp->next;
      }
      temp->next=copy_list(list2);
      return head;
  }

  node *copy_list(node *list1){
  node *head2=NULL;
  node *temp;
  temp=(node *)malloc (sizeof(node));
  temp->value=list1->value;
  temp->next=NULL;
  head2=temp;
  list1=list1->next;
  while(list1){
    temp->next=(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->value=list1->value;
    temp->next=NULL;
    list1=list1->next;
  }
  return head2;
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
          printf("%p\t %d\t %p\n ", temp, temp->value);
          temp=temp->next;
      }
      return 0;
  }

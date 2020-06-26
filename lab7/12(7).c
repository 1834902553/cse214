
   /* Define a function to merge two linked list.Display all the list before and after merging.*/


#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
  node *create_list();

  void print_list(node *temp);

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
      list3=merge_list(list1, list2);
      print_list(list3);
      return 0;
  }
  node *merge_list(node *list1, node *list2)

  {
      node *head, *temp;
      head=list1;
      while(list1->next)
      {
          list1=list1->next;
      }
      list1->next =list2;
      return head;
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

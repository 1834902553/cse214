
/*Define a search function to reverse the linked list using recursion function.Display both list before and after reversing*/
#include <stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
  node *create_list();
  void print_list(node *temp);


node *reverse_recursive(node* head);

int main()
{
    node* head;

    head = NULL;
    head =(node*) malloc(sizeof(node));
    head = create_list();
    printf("Before reverse the List : ");
    print_list(head);
    head = reverse_recursive(head);
    printf("After reverse the List : ");
    print_list(head);

        return 0;
}
node *reverse_recursive(node* head){

    if(head == NULL){

        return head;
    }

    node* previous_node = head;
    node* current_node = head->next;

    node* new_node = reverse_recursive(head->next);

    current_node->next = previous_node;
    previous_node->next = NULL;
    return new_node;

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



void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->value);
    temp = temp->next;
 }

}

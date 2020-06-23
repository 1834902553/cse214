//*Use Dynamic Memory Allocation to create three elements of the linked list and display(only value)the complete linked list using a function(check Empty list)*//
#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
node *create_list();
void print_list(node *temp);
int main(){
    node *head=NULL;
    head =create_list();
    print_list(head);
    return 0;
}
node *create_list(){
 node *a, *b, *c;
a = (node*) malloc (sizeof (node));
b = (node*) malloc (sizeof (node));
c = (node*) malloc (sizeof (node));

a->value=1;
a->next=b;
b->value=2;
b->next=c;
c->value=3;
c->next=NULL;
return a;
}

void print_list(node *temp){
if(temp==NULL){
    printf("Empty List");
    return ;
}
while(temp!=NULL){
    printf(" %d\n", temp->value);
    return 0;
}
}

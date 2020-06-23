//*Define a function to display(only value for each node)the complete linked list and do the same as problem 1(Don't use DMA)*//
#include<stdio.h>
typedef struct Node node;
struct Node{
int value;
node *next;
};
int main(){
node a, b, c;
node *head;
node *temp;
head=&a;
a.value=2;
a.next=&b;
b.value=4;
b.next=&c;
c.value=6;
c.next=NULL;
temp=head;
print_linked_list(head);
return 0;
}
void print_node(node *p){
printf("%p\t %d %p\n ", p, p->value, p->next);
}
void print_linked_list(node *temp){
    while(temp!=NULL){
 printf("%p\t %d %p\n ", temp, temp->value, temp->next);
 temp=temp->next;
}
return 0;
}

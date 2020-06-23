
//*Define a function to print single node (address,value,and next address)of the linked list and do the same as problem 1.(Use typedef keyword ,Don't use DMA)*//
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
while(temp!=NULL){
        printf("%p\t %d %p\n ", temp, temp->value, temp->next);
temp=temp->next;
}
return 0;
}


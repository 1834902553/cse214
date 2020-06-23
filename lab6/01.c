//*Define a Structure for linked list Node,Declare three variable, Assign value and next address in those variable. Print the variable address, value and next variable address.(Don't use any function, "typedef"keyword and Dynamic Memory Allocation(DMA)).*//
#include<stdio.h>
struct Node{
int value;
struct Node *next;
};
int main(){

struct Node a, b, c;
a.value=2;
a.next=&b;
b.value=4;
b.next=&c;
c.value=6;
c.next=NULL;
printf("%p\t %d \t %p\n ", &a, a.value, a.next);
printf("%p\t %d \t %p\n ", &b, b.value, b.next);
printf("%p\t %d \t %p\n ", &c, c.value, c.next);
return 0;
}






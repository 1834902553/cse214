LAB ASSIGNMENT-06

Linked list basic operations[single way(singly)linked list]

Create

Declear

Initialize

Access

Traverse

Output

01.Define a Structure for linked list Node,Declare three variable, Assign value and next address in those variable. Print the variable address, value and next variable address.(Don't use any function, "typedef"keyword and Dynamic Memory Allocation(DMA)).

```C
struct Node a, b, c;
a.value=2;
a.next=&b;
b.value=4;
b.next=&c;
c.value=6;
c.next=NULL;
```

02.Define a function to print single node (address,value,and next address)of the linked list and do the same as problem 1.(Use typedef keyword ,Don't use DMA).

```C
void print_linked_list(node *temp){
    while(temp!=NULL){
 printf("%p\t %d %p\n ", temp, temp->value, temp->next);
 temp=temp->next;
}
return 0;
}
```
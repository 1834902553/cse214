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

03.Define a function to display(only value for each node)the complete linked list and do the same as problem 1(Don't use DMA).

```C
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
```

04.Use Dynamic Memory Allocation to create three elements of the linked list and display(only value)the complete linked list using a function(check Empty list).

```C
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

```

05.Define a function to display the compelete linked list with a recursive function using problem-04.

```C
void print_list(node* head){

    printf("%d",head->data);
    if(head==NULL){
        return;
    }
    print_List(head->next);
}
```

06.Define a function to display the compelete linked list in reverse order with a recursive function using problem-04.

```C
void print_list(node* head){

    node *temp;
    temp = head;

 while(temp!=NULL){
    printf("%d\t",temp->data);
    temp = temp->next;
 }
```

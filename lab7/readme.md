Linked List Operations[Single way (singly) Linked List]

Create

Empty

Size

Fornt

Back

Search

Reverse

01.Define a Create function to declare a linked list with four node using dynamic memory allocation.Print the complete linked list after calling create function.

```C

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
```

02.Define a Empty function to check whether the linked list is empty or not.

```C
int is_empty(node *temp)
  {
      if(temp==NULL)
      {
          return 1;
      }
      return 0;
  }
```

03.Define a Size function to  find the size of the linked list.

```C
int is_size(node *temp)
  {
      int count=0;
      while(temp!=NULL){
        count++;
        temp=temp->next;
      }
      return count;
  }
```

04.Define a Front function to display the first element of the linked list.

```C
int front_value (node *temp)
  {

        return temp->value;
  }

```

05.Define a Back function to display the last element of the linked list.

```C
 int back_value (node *temp){
  if(temp!=NULL)
    {
    while(temp->next!=NULL){
           temp= temp->next;

    }
 return temp->value;
  }
  }
```

06.Define a search function to find a key ( take input key from user ).Print Found if the search key is found in the linked list otherwise print Not Found.

```C
nt search(node *temp,int key){
int found=0;
if(temp){
while(temp!=NULL){
    if(key=temp->value){
        return 1;

    }
    temp=temp->next;
}
if(found==1){
    printf("FOUND");
}
else("NOT FOUND");
}
return 0;
}
```

07.Define a search function to reverse the linked list (don't use recursion).Display both list before and after reversing.

```C
node *reverse_list(node *list){

    node *first,*current,*temp;

    first = list;
    current = list->next;
    first->next = NULL;

    while(current){
        temp = current->next;
        current->next= first;
        current = temp;
    }
    return first;
}
```

08.Define a search function to reverse the linked list using recursion function.Display both list before and after reversing.

```C
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
```

09.Copy a linked list into another linked list.Display both list before and after copy.(don't use recursion).

```C
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

```

10.Copy a linked list into another linked list with a recursive function.Display both list before and after copy.

```C
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
```

11.Define a function to merge two sorted linked list into a sorted linked list.Display all the list before and after mering.(Consider given two linked list are already sorted).

```C
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

```

12.Define a function to merge two linked list.Display all the list before and after merging.

```C
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
```

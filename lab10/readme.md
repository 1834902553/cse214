Design a list Data Structure

LIST:

Head

Tail

Empty

Size

Front

Back

Push Front

Push Back

Pop Front

Pop Back

Clean


```C
void insert_at_begin(int x) {
  struct node *t;
  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;
  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }
  t->next = start;
  start = t;
}
void insert_at_end(int x) {
  struct node *t, *temp;
  t = (struct node*)malloc(sizeof(struct node));
  t->data = x;
  count++;
  if (start == NULL) {
    start = t;
    start->next = NULL;
    return;
  }
  temp = start;
  while (temp->next != NULL)
    temp = temp->next;
  temp->next = t;
  t->next   = NULL;
}
void traverse() {
  struct node *t;
  t = start;
  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
  printf("There are %d elements in linked list.\n", count);
  while (t->next != NULL) {
    printf("%d\n", t->data);
    t = t->next;
  }
  printf("%d\n", t->data); // Print last node
}
void delete_from_begin() {
  struct node *t;
  int n;
  if (start == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
  n = start->data;
  t = start->next;
  free(start);
  start = t;
  count--;
  printf("%d deleted from the beginning successfully.\n", n);
}
void delete_from_end() {
  struct node *t, *u;
  int n;
  if (start == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
  count--;
  if (start->next == NULL) {
    n = start->data;
    free(start);
    start = NULL;
    printf("%d deleted from end successfully.\n", n);
    return;
  }
  t = start;
  while (t->next != NULL) {
    u = t;
    t = t->next;
  }
  n = t->data;
  u->next = NULL;
  free(t);
  printf("%d deleted from end successfully.\n", n);
}

void isEmpty() {
  struct node *t;
  t = start;
  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }else{
  printf("Not Empty\n");
  }
}
void size() {
  struct node *t;
   int count=0;
  t = start;
  if (t == NULL) {
    printf("Linked list is empty.\n");
    return;
  }
  printf("There are %d elements in linked list.\n", count);
  while (t->next != NULL) {
    count++;
    t = t->next;
  }
  printf("%d\n", count); // Print last node
}


```

LIST

A list or sequence is an abstract data type that represents a countable number of ordered values, where the same value may occur more that once. An instance of a list is a computer representation of the mathematical concept of a tuple or finite sequence, the infinite analog of a list is a stream. List are a basic example of containers, as they contain other values. If the same value occurs multiple times, each occurrence is considered a distinct item. 

Follow operation in our code:

Implementation of the list data structure may provide same of the following operations.
•	 An operation for determining the first component (or the “Head”) of a list.
•	 An operation for referring to the list consisting of all the component of a list except for its first (this is called the “Tail”) of the list.
•	A constructor for creating an Empty list.
•	An operation for create Front.
•	An operation for create Back.
•	An operation for create Push Front.
•	An operation for create Push Back.
•	An operation for create Pop Front.
•	An operation for create Pop Back.
•	An operation for create Size.
•	An operation for Clean.
•	An operation for Display.




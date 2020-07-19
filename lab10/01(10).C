#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;
void isEmpty();
void size();
void insert_at_begin(int);
void insert_at_end(int);
void traverse();
void delete_from_begin();
void delete_from_end();
int count = 0;
int main () {
  int i, data;
  for (;;) {
    printf("1. Push fornt.\n");
    printf("2. Push Back.\n");
    printf("3. Traverse linked list.\n");
    printf("4. Pop fornt.\n");
    printf("5. Pop Back.\n");
    printf("6. isEmpty.\n");
    printf("7. size.\n");
    printf("8. Exit\n");
    scanf("%d", &i);
    if (i == 1) {
      printf("Enter value of element\n");
      scanf("%d", &data);
      insert_at_begin(data);
    }
    else if (i == 2) {
      printf("Enter value of element\n");
      scanf("%d", &data);
      insert_at_end(data);
    }
    else if (i == 3)
      traverse();
    else if (i == 4)
      delete_from_begin();
    else if (i == 5)
      delete_from_end();
      else if (i == 6)
      isEmpty();
      else if (i == 7)
      size();
    else if (i == 8)
      break;
    else
      printf("Please enter valid input.\n");
  }
  return 0;
}
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

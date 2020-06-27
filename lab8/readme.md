Linked List Delete (pop)Operations [Single way (singly)linked list]

Delete Baack

Delete Fornt

Delete Value

Delete At

Delete All/Clear

01.Implement a Delete Back function to delete the last(back) element of the linked list(check underflow).

```C
 node *delete_back(node *temp)
  {
      if(temp)
      {
          node *head=temp, *last;
          if(head->next!=NULL){
            while(temp->next){
                last=temp;
                temp=temp->next;
            }
            free(temp);
            last->next=NULL;
          }
          else{
            free(temp);
            head=NULL;
          }
          return head;
      }
      printf("Underflow Linked List\n");
      return temp;
  }
```

02.Implement a Delete Front function to delete the first(front) element of the linked list(check underflow). 

```C
node *delete_front(node *temp)
  {
      if(temp)
      {
          node *new_head=temp->next;
            free(temp);

          return new_head;
      }
      printf("Underflow Linked List\n");
      return temp;
  }
```

03.Implement a Delete value function to delete value(key) from the linked list.Take input the delete key from user(check underflow and not found) .

```C
node *delete_value(node *temp, int key)
  {
      if(temp){
      node *head=temp, *prev;
      while(temp)
      {
          if(temp->value==key)
          {
              if(head==temp){
                head=temp->next;
                free(temp);
                return head;
              }
              else{
                prev->next=temp->next;
                free(temp);
                return head;
              }
          }
          prev=temp;
          temp=temp->next;
      }
      printf(" Node Not Found\n");
      return head;
  }

      printf("Underflow Linked List\n");
      return temp;
  }
```

04.Implement a Delete At function to delete the nth element of the linked list.Take input n from user.(check underflow and index out of range).[Let for the first element n=1] .

```C

  node *delete_at(node *temp, int pos)
  {
     if(temp){
        node *head=temp;
        node *prev, *next;
        int n=1;
        if(pos!=1){
            while(n<pos && temp){
                prev=temp;
                temp=temp->next;
                n++;
            }
            if(temp==NULL && n<pos){
                printf("Invalid Index\n");
                return 0;
            }
            prev->next=temp->next;
            free(temp);
        }
        else{
            head=temp->next;
        free(temp);
        return head;
     }

      printf("Underflow Linked List\n");
      return temp;
  }
  }
```

05.Implement a clear function to delete the all element of the linked list.

```C

  node *clear_list(node *temp){
  if(temp){
    node *to_delete;
    while(temp){
        to_delete=temp;
        temp=temp->next;
        free(to_delete);
    }
    return NULL;
  }

  printf("Underflow Linked List\n");
  return NULL;


  }

```

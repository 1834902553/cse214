Linked List  Insert (push)  Operations [ Single way (singly) Linked List]

Insert front

Insert back

Insert at

Insert after

Insert before

01.Implement an Insert Front function to insert an element at the beginning(front)linked list. 

```C  

  node *insert_front(node *temp, int key)
  {
      node *new_head;
      new_head=(node*) malloc (sizeof(node));
      new_head->value=key;
      new_head->next=temp;
      return new_head;
  }
```

02.Implement an Insert Back function to insert an element at the end(back) of the linked list. 

```C
 node *insert_back(node *temp, int key)
  {
      if(temp==NULL)
      {
          node *new_head;
          new_head=(node*)malloc(sizeof(node));
          new_head->value=key;
          new_head->next=temp;
          return new_head;
      }
      node *head=temp;
      while(temp->next){
        temp=temp->next;
      }
      node *new_node;
      new_node=(node*)malloc(sizeof(node));
          new_node->value=key;
          new_node->next=NULL;
          temp->next=new_node;

      return head;
  }
```

03.Implement an Insert At function to insert an element at the nth index of the linked list.Take input n and value from user.(check index out of range)[let for the first element n=1]

```C

  node *insert_at(node *temp, int pos, int value)
  {
      node *head=temp, *prev, *new_node;
      int i=2;
      if(pos==1)
      {
          new_node=(node*)malloc (sizeof(node));
          new_node->value=value;
          new_node->next=temp;
          return new_node;
                }
                while(temp)
                {
                    prev=temp;
                    if(i==pos)
                        new_node=(node*)malloc(sizeof(node));
                    new_node->value=value;
                    new_node->next=temp->next;
                    prev->next=new_node;
                    return head;
                }
                i++;
                temp=temp->next;
                printf("Invalid Index\n");
                return head;
  }
```

04.Implement an Insert After function to insert an element after a node with value key of the linked list.Take input key and new node value from user.(check index out of range). 

```C 
 node *insert_after(node *temp, int key, int value)
  {
      node *head=temp;
      while(temp)
      {
          if(temp->value==key){
            node *new_node=(node*)malloc (sizeof(node));
          new_node->value=value;
           new_node->next=temp->next;
                   temp->next=new_node;
                    return head;
          }
          temp=temp->next;

      }
      printf("Element Not Found\n");
                    return head;
  }

```

05.Implement an Insert After function to insert an element after a node with value key of the linked list.Take input key and new node value from user.(check index out of range). 

```C 

```

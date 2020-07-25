#include<stdio.h>
#include<stdlib.h>
typedef struct Node node;
struct Node
{
    int value;
    node *next;
};
node* create_list();
void display_list(node *temp);
node* push_front(node *temp, int key);
node* push_back(node *temp, int key);
node* pop_front(node *temp);
node* pop_back(node *temp);
node* clear(node *temp);
int front(node *temp);
int back(node *temp);
void empty(node *temp);
void size(node *temp);

void display(head);
node* push(node *head);
node* pop(node *head);
node* other_operations(node *head);
node* create_list()

{
    node *a, *b, *c, *d;
    a = (node *) malloc(sizeof(node));
    b = (node *) malloc(sizeof(node));
    c = (node *) malloc(sizeof(node));
    d = (node *) malloc(sizeof(node));
    a->value = 1;
    a->next = b;
    b->value = 2;
    b->next = c;
    c->value = 3;
    c->next = d;
    d->value = 4;
    d->next = NULL;
    return a;
}
void display_list(node *temp)
{
    if(temp==NULL)
    {
        printf("List Empty\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d ",temp->value);
        temp = temp->next;
    }
    printf("\n");
}

node* push_front(node *temp, int key)
{
    node *new_head;
    new_head = (node*) malloc(sizeof(node));
    new_head->value = key;
    new_head->next = temp;
    return new_head;
}
node* push_back(node *temp, int key)
{
    if (temp==NULL)
    {
        node *new_head;
        new_head = (node*) malloc(sizeof(node) );
        new_head->value = key;
        new_head->next = NULL;
        return new_head;
    }
    node *head = temp, *new_node;
    while(temp->next)
    {
        temp = temp->next;
    }
    new_node = (node*) malloc(sizeof(node));
    new_node->value = key;
    new_node->next = NULL;
    temp->next = new_node;
    return head;
}
node* pop_front(node *temp)
{
    if(temp)
    {
        node *new_head = NULL;
        new_head = temp->next;
        free(temp);
        return new_head;
    }
    else
        printf("Underflow Linked List");
    return temp;
}
node* pop_back(node *temp)
{
    node *head = temp, *last;
    if(temp)
    {
        if (head->next!=NULL)
        {
            while(temp->next)
            {
                last = temp;
                temp = temp->next;
            }
            free(temp);
            last->next = NULL;
        }
        else
        {
            free(temp) ;
            head = NULL;
        }
        return head;
    }
    else
        printf("Underflow Linked List");
    return head;
}
node* clear(node *temp)
{
    node *to_delete;
    while(temp)
    {
        to_delete = temp;
        temp = temp->next;
        free(to_delete);
    }
    return NULL;
}
int front(node *temp)
{
    if(temp!=NULL)
    {
        return temp->value;
    }
}
int back(node *temp)
{
    if(temp!=NULL)
    {
        while(temp->next)
        {
            temp=temp->next;
        }
        return temp->value;
    }
}
void empty(node *temp)
{
    if(temp==NULL)
        printf("Empty\n");
    else
        printf("Not Empty\n");
}
void size(node *temp)
{
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp->next;
    }
    printf("Size: %d\n", count);
}
int main()
{
    int op;
    node *head = NULL;
    //head = create_list();
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. DISPLAY\n");
        printf("2. PUSH\n");
        printf("3. POP\n");
        printf("4. OTHER OPERATIONS\n") ;
        printf("5. Close\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>5)
        {
            printf("Invalid Option Number. Insert between 1 to 5\n");
        }
        else if(op == 1)
        {
            printf("Linked List: ");
            display(head);
        }
        else if(op == 2)
        {
            head = push(head);
        }
        else if(op == 3)
        {
            head = pop(head);
        }
        else if(op == 4)
        {
            other_operations(head);
        }
    }
    while(op!=5);
}
void display(node *head)
{
    display_list(head);
    getchar();
    printf("Press Enter to Continue");
    getchar();
};
node* push(node *head)
{
    int op, value;
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. Push Front\n");
        printf("2. Push Back\n");
        printf("3. Back to Main Menu\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>3)
        {
            printf("Invalid Option Number. Insert between 1 to 3\n");
        }
        else if(op<3)
        {
            printf("Input Value to PUSH: ");
            scanf("%d", &value);
            if(op==1)
            {
                return push_front(head, value);
            }
            else if(op==2)
            {
                return push_back(head, value);
            }
        }
    }
    while(op!=3);
    return head;
};
node* pop(node *head)
{
    int op, value;
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. Pop Front\n");
        printf("2. Pop Back\n");
        printf("3. Clear\n");
        printf("4. Back to Main Menu\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>4)
        {
            printf("Invalid Option Number. Insert between 1 to 4\n");
        }
        else if(op<4)
        {
            if(op==1)
            {
                return pop_front(head);
            }
            else if(op==2)
            {
                return pop_back(head);
            }
            else if(op==3)
            {
                return clear(head);
            }
        }
    }
    while(op!=4);
    return head;
};
node* other_operations(node *head)
{
    int op;
    do
    {
        system("cls");
        printf("Select Your Option: \n");
        printf("1. Head\n");
        printf("2. Tail\n");
        printf("3. Empty\n");
        printf("4. Size\n") ;
        printf("5. Front\n") ;
        printf("6. Back\n") ;
        printf("7. Back to Main Menu\n");
        printf("Enter Your Option Number: ");
        scanf("%d", &op);
        if(op<=0 || op>7)
        {
            printf("Invalid Option Number. Insert between 1 to 7\n");
        }
        else if(op<7)
        {
            if(op==1)
            {
                printf("Head: %d\n", front(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==2)
            {
                printf("Tail: %d\n", back(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==3)
            {
                empty(head);
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==4)
            {
                size(head);
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==5)
            {
                printf("Front: %d\n",front(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
            else if(op==6)
            {
                printf("Back: %d\n", back(head));
                getchar();
                printf("Press Enter to Continue");
                getchar();
            }
        }
    }
    while(op!=7);
};
